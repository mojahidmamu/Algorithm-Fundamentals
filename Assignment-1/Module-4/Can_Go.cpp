// #include <bits/stdc++.h>
// using namespace std;

// char arr[1005][10005];
// bool vis[10005][1005];
// vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

// int n, m;
// pair<int, int> start_point, end_point;

// bool valid(int i, int j)
// {
//     if (i < 0 || i >= n || j < 0 || j >= m)
//     {
//         return false;
//     }
//     else
//     {
//         return true;
//     }
// }

// bool bfs()
// {
//     queue<pair<int, int>> Q;
//     Q.push(start_point);
//     vis[start_point.first][start_point.second] = true;
//     while (!Q.empty())
//     {
//         pair<int, int> par = Q.front();
//         Q.pop();
//         int par_i = par.first;
//         int par_j = par.second;

//         if (par_i == end_point.first && par_j == start_point.second)
//         {
//             return true;
//         }

//         for (int i = 0; i < 4; i++)
//         {
//             int ci = par_i + d[i].first;
//             int cj = par_j + d[i].second;
//             if (valid(ci, cj))
//             {
//                 vis[ci][cj] = true;
//                 Q.push({ci, cj});
//             }
//         }
//     }
//     return false;
// }

// int main()
// {
//     cin >> n >> m;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//         for (int j = 0; j < m; j++)
//         {
//             if (arr[i][j] == 'A')
//             {
//                 start_point = {i, j};
//             }
//             if (arr[i][j] == 'B')
//             {
//                 end_point = {i, j};
//             }
//         }
//     }

//     memset(vis, false, sizeof(vis));
//     cout << (bfs() ? "YES" : "NO") << endl;

//     return 0;
// }

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
