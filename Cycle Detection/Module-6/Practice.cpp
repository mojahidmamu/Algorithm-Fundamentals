#include <bits/stdc++.h>
using namespace std;

bool vis[1005];
vector<int> adj_list[1005];
bool pathVis[1005];
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
    pathVis[source] = false;
}

int main()
{
    
    return 0;
}
