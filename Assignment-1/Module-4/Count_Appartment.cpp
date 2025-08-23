#include <bits/stdc++.h>
using namespace std;
// Global array:
char arr[1005][1005];
// visited array:
bool vis[1005][1005];

vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
// Global integer:
int n, m;
pair<int, int> start_point, end_point;
bool found = false;

bool valid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m);
}

void dfs(int Si, int Sj)
{
    if (found)
    {
        return;
    }
    vis[Si][Sj] = true;

    if (Si == end_point.first && Sj == end_point.second)
    {
        found = true;
        return;
    }

    for (auto [dx, dy] : d)
    {
        int dx = dir.first;
        int dy = dir.second;
        int ci = Si + dx;
        int cj = Sj + dy;

        if (valid(ci, cj) && !vis[ci][cj] && (arr[ci][cj] == '.' || arr[ci][cj] == 'B'))
        {
            dfs(ci, cj);
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
            if (arr[i][j] == 'A')
            {
                start_point = {i, j};
            }
            if (arr[i][j] == 'B')
            {
                end_point = {i, j};
            }
        }
    }

    memset(vis, false, sizeof(vis));
    dfs(start_point.first, start_point.second);
    if (found)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
