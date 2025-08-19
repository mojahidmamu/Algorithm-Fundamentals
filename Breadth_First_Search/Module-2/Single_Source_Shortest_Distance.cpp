#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005]; //  global vector:
bool vis[1005];
int level[1005];

void bfs(int source_code)
{
    queue<int> q;
    q.push(source_code);
    vis[source_code] = true;
    level[source_code] = 0;

    while (!q.empty())
    {
        int parent = q.front();
        q.pop();

        // cout << parent << " ";

        for (int child : adj_list[parent])
        {
            if (vis[child] == false)
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[parent] + 1;
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
    int source_code, dst;
    cin >> source_code >> dst;
    bfs(source_code);

    for (int i = 0; i < N; i++)
    {
        cout << i << " -> " << level[i] << endl;
    }

    return 0;
}