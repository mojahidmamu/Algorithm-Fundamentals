// #include <bits/stdc++.h>
// using namespace std;

// struct DSU {
//     vector<int> parent, sz;
//     DSU(int n) {
//         parent.resize(n+1);
//         sz.resize(n+1, 1);
//         for (int i = 1; i <= n; i++) parent[i] = i;
//     }
//     int find(int x) {
//         if (parent[x] == x) return x;
//         return parent[x] = find(parent[x]);
//     }
//     bool unite(int a, int b) {
//         a = find(a), b = find(b);
//         if (a == b) return false;
//         if (sz[a] < sz[b]) swap(a, b);
//         parent[b] = a;
//         sz[a] += sz[b];
//         return true;
//     }
// };

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin >> n;
//     vector<pair<int,int>> edges;
//     for (int i = 0; i < n-1; i++) {
//         int a, b;
//         cin >> a >> b;
//         edges.push_back({a, b});
//     }

//     DSU dsu(n);
//     vector<pair<int,int>> redundant;
//     for (auto [a, b] : edges) {
//         if (!dsu.unite(a, b)) {
//             redundant.push_back({a, b}); // cycle edge
//         }
//     }

//     // find all components
//     vector<int> leaders;
//     for (int i = 1; i <= n; i++) {
//         if (dsu.find(i) == i) {
//             leaders.push_back(i);
//         }
//     }

//     int k = leaders.size();
//     int t = k - 1;
//     cout << t << "\n";

//     for (int i = 1; i < k; i++) {
//         auto [x, y] = redundant[i-1]; // close this edge
//         int u = leaders[0];
//         int v = leaders[i];           // build new edge
//         cout << x << " " << y << " " << u << " " << v << "\n";
//     }

//     return 0;
// }
