#include <bits/stdc++.h>
using namespace std;

// int N, Q;
// vector<int> adj_list[1005];
// vector<int> indegree; // track parents
// vector<int> strength;

// bool vis[1005];
// vector<int> adj_list[1005];
// int parent[1005];
// bool isCycle;

void dfs(int node, int depth)
{
    if (depth == 0)
    {
        strength[node] = 0;
    }
    else
    {
        strength[node] = (1 << depth);
    }

    for (int child : adj_list[node])
    {
        if (cuts.count({node, child}))
        {
            continue;
        }
        dfs(child, depth + 1);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---

    int N;
    if (!(cin >> N))
    {
        return 0;
    }

    vector<vector<int>> adj_list(N + 1);
    vector<int> indeg(N + 1, 0);

    for (int i = 0; i < N - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        indeg[b]++;
    }

    int Q;
    cin >> Q;
    set<pair<int, int>> cuts;
    while (Q--)
    {
        int U, V;
        cin >> U >> V;
        cuts.insert({U, V});
        indeg[V]--;
    }

    vector<long long> strength(N + 1, 0);
    vector<char> vis(N + 1, 0);

    for (int i = 1; i <= N; ++i)
    {
        if (indeg[i] == 0 && !vis[i])
        {
            // BFS from root i
            queue<pair<int, int>> q; // (node, depth)
            q.push({i, 0});
            vis[i] = 1;

            while (!q.empty())
            {
                auto [u, d] = q.front();
                q.pop();

                if (d == 0)
                    strength[u] = 0;
                else if (d < 62)
                    strength[u] = (1LL << d); // safe shift
                else
                    strength[u] = (1LL << 62); // clamp large depth to avoid UB

                for (int v : adj[u])
                {
                    if (cuts.count({u, v}))
                        continue; // edge removed
                    if (vis[v])
                        continue;
                    vis[v] = 1;
                    q.push({v, d + 1});
                }
            }
        }
    }

    for (int i = 1; i <= N; ++i)
    {
        cout << strength[i] << (i == N ? '\n' : ' ');
    }
    return 0;
}
