#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int parent[N];
int groupSize[N];

void DSU_initialize(int n)
{
    for (int i = 0; i < n; i++)
    {
        parent[i] = -1;
        groupSize[i] = 1;
    }
}

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

void DSU_union(int node1, int node2)
{
    int LeaderA = find_Leader(node1);
    int LeaderB = find_Leader(node2);

    if (groupSize[LeaderA] > groupSize[LeaderB])
    {
        parent[LeaderB] = LeaderA;
        groupSize[LeaderA] += groupSize[LeaderB];
    }
    else
    {
        parent[LeaderA] = LeaderB;
        groupSize[LeaderB] += groupSize[LeaderA];
    }
}

int main()
{
    memset(parent, -1, sizeof(parent));
    memset(groupSize, 1, sizeof(groupSize));

    int n, e;
    cin >> n >> e;
    DSU_initialize(n);
    bool isCycle = false;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int LeaderA = DSU_find(a);
        int LeaderB = DSU_find(b);

        if (LeaderA == LeaderA)
        {
            isCycle = true;
        }
        else
        {
            DSU_union(a, b);
        }
    }

    if (isCycle)
    {
        cout << "Cycle Found" << endl;
    }
    else
    {
        cout << "Cycle Not Found" << endl;
    }

    return 0;
}
