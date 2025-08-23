#include <bits/stdc++.h>
using namespace std;

int n, m;
bool vis[1005][1005];
vector<string> grid;
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid(int i, int j)
{
    return (x >= 0 && x < n && y >= 0 && y < m && !visited[x][y] && grid[x][y] == '.');
}

void bfs(int Si, int Sj)
{
    int count = 0;
    queue<pair<int, int>> q;
    q.push({Si, Sj});
    vis[Si][Sj] = true;

    while (!q.empty())
    {
        auto [x, y] = q.front();
        q.pop();
        count++;

        for(auto [dx, dy] : d)
        {
            int nx = x + dx;
            int ny = y + dy;
            if (vis(nx, ny))
            {
                vis[nx][ny] = true;
                q.push({nx, ny});
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

    memset(vis, false, sizeof(vis));

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