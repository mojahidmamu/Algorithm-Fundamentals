#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
bool vis[1005];

int bfs(int start_node)
{
    int count = 0;
    queue<int> q;
    q.push(start_node);
    vis[start_node] = true;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        for (int child : adj_list(par))
        {
            if (!vis[child])
            {
                vis[child] = true;
                q.push(child);
            }
        }
    }
    return count;
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));

    int start_node;
    cin >> start_node;

    int result = bfs(start_node);
    return 0;
}
