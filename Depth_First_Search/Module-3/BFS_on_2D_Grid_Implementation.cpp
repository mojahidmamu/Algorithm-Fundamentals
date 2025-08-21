#include <bits/stdc++.h>
using namespace std;
// Global array:
char arr[20][20];
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

void bfs(int Si, int Sj)
{
    queue<pair<int, int>> Q;
    Q.push({Si, Sj});
    vis[Si][Sj] = true;
    while (!Q.empty())
    {
        pair<int, int> par = Q.front();
        Q.pop();
        int par_i = par.first;
        int par_j = par.second;
        for (int i = 0; i < 4; i++)
        {
            int ci = par_i + d[0].first;
            int cj = par_j + d[0].second;
            if (valid(ci, cj) && !vis[ci][cj])
            {
                Q.push({ci, cj});
                vis[ci][cj] = true;
            }
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

    int Si, Sj;
    cin >> Si >> Sj;

    memset(vis, false, sizeof(vis));
    bfs(Si, Sj);
    return 0;
}
