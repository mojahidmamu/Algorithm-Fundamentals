#include <bits/stdc++.h>
using namespace std;
bool vis[1005];
vector<int> adj_list[1005];
bool  pathVis[1005];
bool isCycle;

void dfs(int source)
{
    vis[source] = true;
    pathVis[source] = true;
    for (int child : adj_list[source])
    {
        if (vis[child] == true && pathVis[child] == true)
        {
            isCycle = true;
        }
        if (!vis[child])
        {
            dfs(child);
        }
    }
}

int main()
{
    int N, E;
    cin >> N >> E;

    while (E--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
    }

    memset(vis, false, sizeof(vis));
    memset(pathVis, false, sizeof(pathVis));
    isCycle = false;
    for (int i = 0; i < N; i++)
    {
        if (!vis[i])
        {
            dfs(i);
        }
    }

    // print condition:
    if (isCycle == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
