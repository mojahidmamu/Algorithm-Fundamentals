#include <bits/stdc++.h>
using namespace std;
 
bool vis[1005];
vector<int> adj_list[1005];
int parent[1005];
bool isCycle;

void bfs(int source)
{
    queue<int> q;
    q.push(source);
    vis[source] = true;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        // cout << par << " ";
        for (int child : adj_list[par])
        {
            if(vis[child] == true && parent[par] != child)
            {
                isCycle = true;
            }
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
                parent[child] = par;
            }
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
        adj_list[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));
    isCycle = false;
    for (int i = 0; i < N; i++)
    {
        if (!vis[i])
        {
            bfs(i);
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
