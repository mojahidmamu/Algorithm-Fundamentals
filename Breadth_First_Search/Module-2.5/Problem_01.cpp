#include <bits/stdc++.h>
using namespace std;

vector<int> path[1005];
bool vis[1005];
int level[1005];

int BFS(int src, int dst, int N)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;

    while (!q.empty())
    {
        int parent = q.front();
        q.pop();
        for (int child : path[parent])
        {
            if (vis[child] == false)
            {
                q.push(child);
                vis[child] = true;
                level[child] = level[parent] + 1;
                if (child == dst)
                {
                    return level[child];
                }
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
        path[a].push_back(b);
        path[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));

    int Q;
    cin >> Q;
    while (Q--)
    {
        int src, dst;
        cin >> src >> dst;
        int ans = BFS(src, dst, N);
        cout << ans << endl;
    }

    return 0;
}
