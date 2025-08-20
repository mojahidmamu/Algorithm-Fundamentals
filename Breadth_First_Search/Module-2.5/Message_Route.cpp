#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a); // কারণ এটি Undirected connection
    }

    vector<int> parent(n + 1, -1);
    vector<bool> visited(n + 1, false);

    queue<int> q;
    q.push(1);
    visited[1] = true;

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int v : adj[u]) {
            if (!visited[v]) {
                visited[v] = true;
                parent[v] = u;
                q.push(v);
            }
        }
    }

    if (!visited[n]) {
        cout << "IMPOSSIBLE\n";
    } else {
        // রুট বের করা
        vector<int> path;
        for (int cur = n; cur != -1; cur = parent[cur]) {
            path.push_back(cur);
        }
        reverse(path.begin(), path.end());

        cout << path.size() << "\n";
        for (int node : path) {
            cout << node << " ";
        }
        cout << "\n";
    }

    return 0;
}
