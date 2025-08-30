#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<string> maze;
bool vis[1005][1005];
int startX, startY;

int dx[4] = {0, 0, -1, 1};
int dy[4] = {1, -1, 0, 0};

bool valid(int x, int y)
{
    return (x >= 0 && x < N && y >= 0 && y < M && !vis[x][y] && (maze[x][y] == '.' || maze[x][y] == 'D'));
}

bool dfs(int x, int y)
{
    if (maze[x][y] == 'D')
    {
        return true;
    }

    vis[x][y] = true;

    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (valid(nx, ny))
        {
            if (dfs(nx, ny))
            {
                if (maze[x][y] != 'R')
                {
                    maze[x][y] = 'X';
                }
                return true;
            }
        }
    }

    return false;
}

int main()
{
    cin >> N >> M;
    maze.resize(N);
    for (int i = 0; i < N; i++)
    {
        cin >> maze[i];
        for (int j = 0; j < M; j++)
        {
            if (maze[i][j] == 'R')
            {
                startX = i;
                startY = j;
            }
        }
    }
    memset(vis, false, sizeof(vis));

    dfs(startX, startY);

    for (int i = 0; i < N; i++)
    {
        cout << maze[i] << endl;
    }

    return 0;
}
