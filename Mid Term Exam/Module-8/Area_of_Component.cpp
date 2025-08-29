#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<string> grid(1005);
bool vis[1005][1005];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid(int x, int y)
{
    return (x >= 0 && x < N && y >= 0 && y < M && !vis[x][y] && grid[x][y] == '.');
}

bool bfs(int Si, int Sj, int Di, int Dj)
{
    queue<pair<int, int>> q;
    q.push({Si, Sj});
    vis[Si][Sj] = true;

    while (!q.empty())
    {
        auto par = q.front();
        q.pop();
        int x = par.first;
        int y = par.second;

        if (x == Di && y == Dj)
        {
            return true;
        }

        for (auto child : d)
        {
            int A = child.first;
            int B = child.second;

            int Nx = x + A;
            int Ny = y + B;
            if (valid(Nx, Ny))
            {
                vis[Nx][Ny] = true;
                q.push({Nx, Ny});
            }
        }
    }
    return false;
}

int main()
{
    cin >> N >> M;
    grid.resize(N);
    for (int i = 0; i < N; i++)
    {
        cin >> grid[i];
    }

    int Si, Sj, Di, Dj;
    cin >> Si >> Sj;
    cin >> Di >> Dj;

    if (grid[Si][Sj] == '-' || grid[Di][Dj] == '-') // if source & destination path is wrong
    {
        cout << "NO" << endl;
    }
    memset(vis, false, sizeof(vis));

    if (bfs(Si, Sj, Di, Dj))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
// 