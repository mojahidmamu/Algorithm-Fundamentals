#include <bits/stdc++.h>
using namespace std;

char arr[1005][1005];
bool vis[1005][1005];
int n, m;
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
}

void dfs(int Si, int Sj)
{
    vis[Si][Sj] = true;

    for (auto dir : d)
    { 
        int ni = Si + dir.first;
        int nj = Sj + dir.second;

        if (valid(ni, nj) && !vis[ni][nj] && (arr[ni][nj] == '.' ))
        {
            dfs(ni, nj);
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    memset(vis, false, sizeof(vis));

    int apartments = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!vis[i][j] && arr[i][j] == '.')
            {
                dfs(i, j);
                apartments++;
            }
        }
    }

    cout << apartments << endl;
    return 0;
}
