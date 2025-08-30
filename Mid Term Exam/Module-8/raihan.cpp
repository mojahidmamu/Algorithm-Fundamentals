#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<string> grid;

// চার দিকের move (ডান, বাম, উপরে, নিচে)
int dr[4] = {0, 0, -1, 1};
int dc[4] = {1, -1, 0, 0};

int main()
{
    cin >> n >> m;
    grid.resize(n);

    for (int i = 0; i < n; i++)
        cin >> grid[i];

    pair<int, int> start = {-1, -1}, dest = {-1, -1};

    // স্টার্ট আর ডেস্টিনেশন বের করা
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 'R')
                start = {i, j};
            if (grid[i][j] == 'D')
                dest = {i, j};
        }
    }

    // ভিজিটেড আর parent রাখবো
    vector<vector<bool>> vis(n, vector<bool>(m, false));
    vector<vector<pair<int, int>>> parent(n, vector<pair<int, int>>(m, {-1, -1}));

    queue<pair<int, int>> q;
    q.push(start);
    vis[start.first][start.second] = true;

    bool found = false;

    // BFS চালানো
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        int r = par.first;
        int c = par.second;
        q.pop();

        for (int k = 0; k < 4; k++)
        {
            int nr = r + dr[k];
            int nc = c + dc[k];

            // বাইরে গেলে skip
            if (nr < 0 || nr >= n || nc < 0 || nc >= m)
                continue;
            if (vis[nr][nc] || grid[nr][nc] == '#')
                continue;

            vis[nr][nc] = true;
            parent[nr][nc] = make_pair(r, c);
            q.push({nr, nc});

            if (grid[nr][nc] == 'D')
            {
                found = true;
                break;
            }
        }
        if (found)
            break;
    }

    // যদি পথ পাওয়া যায় তাহলে ব্যাকট্র্যাক
    if (found)
    {
        pair<int, int> cur = dest;
        while (cur != start)
        {

            int r = cur.first;
            int c = cur.second;
            if (grid[r][c] == '.')
                grid[r][c] = 'X';
            cur = parent[r][c];
        }
    }

    // রেজাল্ট প্রিন্ট
    for (int i = 0; i < n; i++)
        cout << grid[i] << "\n";

    return 0;
}
// Accepted: 