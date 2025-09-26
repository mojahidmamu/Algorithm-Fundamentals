#include <bits/stdc++.h>
using namespace std;
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);
const int MOD = 1e9 + 7;

// Math Helpers
long long gcd(long long a, long long b) { return b ? gcd(b, a % b) : a; }
long long lcm(long long a, long long b) { return a / gcd(a, b) * b; }
long long modPow(long long a, long long b, long long mod = MOD)
{
    long long res = 1;
    a %= mod;
    while (b)
    {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

// Binary Search
int bsearch(vector<int> &v, int x)
{
    int l = 0, r = v.size() - 1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (v[m] == x)
            return m;
        else if (v[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}

// BFS/DFS Template
vector<int> adj[100005];
bool vis[100005];
void bfs(int s)
{
    queue<int> q;
    q.push(s);
    vis[s] = 1;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int v : adj[u])
            if (!vis[v])
            {
                vis[v] = 1;
                q.push(v);
            }
    }
}
void dfs(int u)
{
    vis[u] = 1;
    for (int v : adj[u])
        if (!vis[v])
            dfs(v);
}

// Prefix Sum
vector<long long> prefixSum(vector<int> &a)
{
    int n = a.size();
    vector<long long> pre(n + 1, 0);
    for (int i = 1; i <= n; i++)
        pre[i] = pre[i - 1] + a[i - 1];
    return pre;
}

int main()
{
    fastio;
    // Input Example
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    // Prefix Sum Usage Example
    vector<long long> pre = prefixSum(a);
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << pre[r] - pre[l - 1] << "\n"; // 1-based
    }

    return 0;
}
