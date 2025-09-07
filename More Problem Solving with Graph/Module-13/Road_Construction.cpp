#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int parent[N];
int groupSize[N];
int component;
int mx;

int DSU_find(int node)
{
    if (parent[node] == -1)
    {
        return node;
    }
    int leader = DSU_find(parent[node]);
    parent[node] = leader;
    return leader;
}

int DSU_union(int node1, int node2)
{
    int leaderA = DSU_find(node1);
    int leaderB = DSU_find(node2);

    if (leaderA == leaderB)
        return false;  

    component--;

    if (groupSize[leaderA] > groupSize[leaderB])
    {
        parent[leaderB] = leaderA;
        groupSize[leaderA] += groupSize[leaderB];
        mx = max(mx, groupSize[leaderA]);
    }
    else
    {
        parent[leaderA] = leaderB;
        groupSize[leaderB] += groupSize[leaderA];
        mx = max(mx, groupSize[leaderB]);
    }
    return component, mx;
}

int main()
{
    int n, m;
    cin >> n >> m;
    component = n;
    mx = 1;

    for (int i = 1; i <= n; i++)
    {
        parent[i] = -1;
        groupSize[i] = 1;
    }

    while (m--)
    {
        int a, b;
        cin >> a >> b;
        DSU_union(a, b);
        cout << component << " " << mx << endl;
    }

    return 0;
}
