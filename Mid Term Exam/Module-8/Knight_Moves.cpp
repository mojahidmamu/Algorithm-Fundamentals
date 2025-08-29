#include <bits/stdc++.h>
using namespace std;

bool vis[1005][1005];
int level[1005][1005];
vector<pair<int, int>> d = {{2, -1}, {1, -2}, {2, 1}, {1, 2}, {-1, 2}, {-2, 1}, {-2, -1}, {-1, -2}};
int N, M;

bool valid(int i, int j)
{
    return (i >= 0 && i < N && j >= 0 && j < M);
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    level[si][sj] = 0;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        q.pop();
        int par_i = par.first;
        int par_j = par.second;

        for (auto child : d)
        {
            int X = child.first;
            int Y = child.second;

            int ci = par_i + X;
            int cj = par_j + Y;

            if (valid(ci, cj) && !vis[ci][cj])
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
                level[ci][cj] = level[par_i][par_j] + 1;
            }
        }
    }
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        cin >> N >> M;
        int si, sj, di, dj;
        cin >> si >> sj >> di >> dj;

        memset(vis, false, sizeof(vis));
        memset(level, -1, sizeof(level));
        bfs(si, sj);

        if (level[di][dj] == -1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << level[di][dj] << endl;
        }
    }
    return 0;
}
// Accepted: 