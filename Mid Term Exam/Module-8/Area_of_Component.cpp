#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<string> grid;
bool vis[1005][1005];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid(int x, int y)
{
    return (x >= 0 && x < N && y >= 0 && y < M && !vis[x][y] && grid[x][y] == '.');
}

int bfs(int x, int y)
{
    queue<pair<int, int>> q;
    q.push({x, y});
    vis[x][y] = true;
    int count = 1;

    while (!q.empty())
    {
        auto par = q.front();
        q.pop();
        int x = par.first;
        int y = par.second;

        for (auto child : d)
        {
            int X = child.first;
            int Y = child.second;

            int Nx = x + X;
            int Ny = y + Y;
            if (valid(Nx, Ny))
            {
                vis[Nx][Ny] = true;
                q.push({Nx, Ny});
                count++;
            }
        }
    }
    return count;
}

int main()
{
    cin >> N >> M;
    grid.resize(N);
    for (int i = 0; i < N; i++)
    {
        cin >> grid[i];
    }
    int ans = INT_MAX;
    memset(vis, false, sizeof(vis));

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (grid[i][j] == '.' && !vis[i][j])
            {
                int area = bfs(i, j);
                ans = min(ans, area);
            }
        }
    }

    if (ans == INT_MAX)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << ans << endl;
    }

    return 0;
}