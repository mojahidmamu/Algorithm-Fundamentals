#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int parent[N];
int groupSize[N];

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
    int LeaderA = DSU_find(node1);
    int LeaderB = DSU_find(node2);

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

    int N, E;
    cin >> N >> E;
    int cycle_edges = 0;
    while (E--)
    {
        int a, b;
        cin >> a >> b;
        int LeaderA = DSU_find(a);
        int LeaderB = DSU_find(b);

        if (LeaderA == LeaderA)
        {
            cycle_edges++;
        }
        else
        {
            DSU_union(a, b);
        }
    }

    cout << cycle_edges << endl;
    return 0;
}