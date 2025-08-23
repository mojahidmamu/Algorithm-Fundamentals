#include <bits/stdc++.h>
using namespace std;

int n, m;
bool vis[1005][1005];
vector<string> grid;
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m && !vis[i][j] && grid[i][j] == '.');
}

int bfs(int Si, int Sj)
{
    int count = 0;
    queue<pair<int, int>> q;
    q.push(make_pair(Si, Sj));
    vis[Si][Sj] = true;

    while (!q.empty())
    {
        // auto [x, y] = q.front();
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        count++;

        for (int k = 0; k < d.size(); k++)
        {
            int dx = d[k].first;
            int dy = d[k].second;
            int nx = x + dx;
            int ny = y + dy;
            if (valid(nx, ny))
            {
                vis[nx][ny] = true;
                q.push(make_pair(nx, ny));
            }
        }
    }
    return count;
}

int main()
{
    cin >> n >> m;
    grid.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> grid[i];
    }

    vector<int> apartments;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j] && grid[i][j] == '.')
            {
                apartments.push_back(bfs(i, j));
            }
        }
    }

    if (apartments.empty())
    {
        return 0;
    }

    sort(apartments.begin(), apartments.end());
    for (int i = 0; i < apartments.size(); i++)
    {
        cout << apartments[i] << " ";
    }
    cout << endl;

    return 0;
}
// Accepted: