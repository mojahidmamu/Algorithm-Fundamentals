#include <bits/stdc++.h>
using namespace std;

// Fast I/O
#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);

// Constants
const int MOD = 1e9 + 7;
const int MAXN = 1e5 + 5;

// Math Helpers
long long gcd(long long a, long long b) { return b == 0 ? a : gcd(b, a % b); }
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

// Binary Search Template
int binarySearch(vector<int> &arr, int x)
{
    int l = 0, r = arr.size() - 1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (arr[m] == x)
            return m;
        else if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}

// BFS / DFS Template
vector<int> adj[MAXN];
bool visited[MAXN];
void bfs(int start)
{
    queue<int> q;
    q.push(start);
    visited[start] = true;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int v : adj[u])
        {
            if (!visited[v])
            {
                visited[v] = true;
                q.push(v);
            }
        }
    }
}
void dfs(int u)
{
    visited[u] = true;
    for (int v : adj[u])
    {
        if (!visited[v])
            dfs(v);
    }
}

// Prefix Sum Example
vector<long long> prefixSum(vector<int> &arr)
{
    int n = arr.size();
    vector<long long> pre(n + 1, 0);
    for (int i = 1; i <= n; i++)
        pre[i] = pre[i - 1] + arr[i - 1];
    return pre;
}

int main()
{
    fastio;

    // Example Input
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    // Prefix Sum Usage
    vector<long long> pre = prefixSum(a);
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << pre[r] - pre[l - 1] << "\n"; // 1-based index
    }

    return 0;
}
