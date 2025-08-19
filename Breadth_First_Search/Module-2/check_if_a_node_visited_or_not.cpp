#include <bits/stdc++.h>
using namespace std;
vector<int> adj_lst[1005];
bool vis[1005];

int main()
{
    int N, E;
    cin >> N >> E;

    while (E--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a); // for undirected
    }
    memset(vis, false, sizeof(vis));
    bfs(0);
    return 0;
}
