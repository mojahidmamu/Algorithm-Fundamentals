#include <bits/stdc++.h>
using namespace std;
// Global array:
int arr[20][20];
// visited array:
bool vis[20][20];

vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
// Global integer:
int n, m;

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int dfs(int Si, int Sj)
{
}

int main()
{

    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][i];
        }
    }

    int Si, Sj;
    cin >> Si >> Sj;

    memset(vis, false, sizeof(vis));
    dfs(Si, Sj);
    return 0;
}
