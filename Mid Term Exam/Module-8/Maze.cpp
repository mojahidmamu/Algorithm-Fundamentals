#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<string> maze;
bool vis[1005][1005];
int startX, startY;

bool dfs(int x, int y)
{
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

    bool found = dfs(startX, startY);

    if (found)
    {
        for (int i = 0; i < N; i++)
        {
            cout << maze[i] << endl;
        }
    }
    else
    {
        for (int i = 0; i < N; i++)
        {
            cout << maze[i] << endl;
        }
    }

    return 0;
}
