#include <bits/stdc++.h>
using namespace std;

const N = 1e5 + 5;
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

int find_Leader(int node)
{
    if (parent[node] == -1)
    {
        return node;
    }
    int leader = find_Leader(parent[node]);
    parent[node] = leader;
    return leader;
}

void union_by_size(int node1, int node2)
{
}

int main()
{
    int n, m;
    cin >> n >> m;
    DSU_initialize(n);
    bool isCycle = false;

    while (m--)
    {
        int a, b;
        cin >> a >> b;
        int LeaderA = find_Leader(a);
        int LeaderB = find_Leader(b);

        if (LeaderA == LeaderA)
        {
            isCycle = true;
        }
        else
        {
            union_by_size(a, b);
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
