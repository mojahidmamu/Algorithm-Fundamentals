#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005]; //  global vector:
bool vis[1005];
int level[1005];
int parent[1005];

void bfs(int source_code)
{
    queue<int> q;
    q.push(source_code);
    vis[source_code] = true;
    level[source_code] = 0;
    parent[source_code] = -1;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();

        // cout < << " ";

        for (int child : adj_list[par])
        {
            if (vis[child] == false)
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1;
                parent[child] = par;
            }
        }
    }
    cout << endl;
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
        adj_list[b].push_back(a); // for undirected
    }
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    memset(parent, -1, sizeof(parent));
    int source_code, dst;
    cin >> source_code >> dst;
    bfs(source_code);

    vector<int> path;
    int node = dst;
    while (node != -1)
    {
        // cout << node << " ";
        path.push_back(node);
        node = parent[node];
    }
    reverse(path.begin(), path.end());
    for (int x : path)
    {
        cout << x << " ";
    }

    // for (int i = 0; i < N; i++)
    // {
    //     cout << i << " -> " << parent[i] << endl;
    // }
    // cout << level[dst] << endl;
    return 0;
}