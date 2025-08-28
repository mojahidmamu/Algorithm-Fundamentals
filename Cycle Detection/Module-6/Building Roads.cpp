#include <bits/stdc++.h>
using namespace std;

struct DSU {
    int n;
    vector<int> p, r;
    DSU(int n): n(n), p(n+1), r(n+1,0) {
        iota(p.begin(), p.end(), 0);
    }
    int find(int x){ return p[x]==x ? x : p[x]=find(p[x]); }
    bool unite(int a,int b){
        a = find(a); b = find(b);
        if(a==b) return false;
        if(r[a] < r[b]) swap(a,b);
        p[b] = a;
        if(r[a]==r[b]) r[a]++;
        return true;
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    if(!(cin >> n >> m)) return 0;

    DSU dsu(n);
    for (int i = 0; i < m; ++i) {
        int a, b; cin >> a >> b;
        dsu.unite(a, b);
    }

    // Collect one representative per component
    vector<int> reps;
    vector<bool> seen(n+1, false);
    for (int i = 1; i <= n; ++i) {
        int r = dsu.find(i);
        if (!seen[r]) {
            seen[r] = true;
            reps.push_back(i); // store any node from this component
        }
    }

    // If there are C components, we need C-1 roads.
    int k = (int)reps.size() - 1;
    cout << k << "\n";
    for (int i = 1; i < (int)reps.size(); ++i) {
        // Connect the first representative to all others
        cout << reps[0] << " " << reps[i] << "\n";
    }
    return 0;
}
