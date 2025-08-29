#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<string> grid(1005);
bool vis[1005][1005];

bool bfs(int Si, int Sj, int Di, int Dj)
{
    queue<pair<int, int>> q;
    q.push({Si, Sj});
    vis[Si][Sj] = true;
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
