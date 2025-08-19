#include <bits/stdc++.h>
using namespace std;
vector<int> adj_lst[1005];
bool vis[1005];

void bfs(int source_code)
{
    queue<int> q;
    q.push(source_code);
    vis[source_code] = true;

    while (!q.empty())
    {
        int parent = q.front();
        q.pop();

        cout << parent << " ";

        for (int child : adj_list[parent])
        {
            if (vis[child] == false)
            {
                q.push(child);
                vis[child] = true;
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
        adj_list[b].push_back(a); // for undirected
    }
    memset(vis, false, sizeof(vis));
    int source_code, dst;
    cin >> source_code >> dst;
    bfs(source_code);

    if (vis[dst])
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
