#include <bits/stdc++.h>
using namespace std;

vector<int> adj[1005];
bool vis[1005];

int dfs(int node) {
    vis[node] = true;
    int cnt = 1; // নিজেকে গণনা করবো
    for (int child : adj[node]) {
        if (!vis[child]) {
            cnt += dfs(child);
        }
    }
    return cnt;
}

int main() {
    int n, m; 
    cin >> n >> m;  // n = nodes, m = edges
    
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> comp_sizes;

    for (int i = 1; i <= n; i++) {
        if (!vis[i]) {
            int size = dfs(i);
            comp_sizes.push_back(size);
        }
    }

    sort(comp_sizes.begin(), comp_sizes.end());

    for (int sz : comp_sizes) {
        cout << sz << " ";
    }
    cout << "\n";
    return 0;
}
