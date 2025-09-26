#include <bits/stdc++.h>
using namespace std;

int N, Q;
vector<int> adj_list[1005];
vector<int> indegree; // track parents
vector<int> strength;
set<pair<int, int>> cuts;

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

    cin >> N;
    indegree.assign(N + 1, 0);
    strength.assign(N + 1, 0);

    for (int i = 0; i < N - 1; i++)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        indegree[b]++;
    }

    cin >> Q;
    while (Q--)
    {
        int U, V;
        cin >> U >> V;
        cuts.insert({U, V});
        indegree[V]--;
    }

    for (int i = 1; i <= N; i++)
    {
        if (indegree[i] == 0)
        {
            dfs(i, 0);
        }
    }

    for (int i = 1; i <= N; i++)
    {
        cout << strength[i] << " ";
    }
    cout << endl;

    return 0;
}
