#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int par[N];
int groupSize[N];

void dsu_initialize(int n)
{
    for (int i = 0; i <= n; i++)
    {
        par[i] = -1;
        groupSize[i] = 1;
    }
}

// DSU-(find): Time Complexity= O(logN)
int DSU_find(int node)
{
    if (par[node] == -1)
    {
        return node;
    }
    int leader = DSU_find(par[node]);
    par[node] = leader;
    return leader;
}

// DSU-(union): Time Complexity= O(N)
void DSU_union(int node1, int node2)
{
    int leaderA = DSU_find(node1);
    int leaderB = DSU_find(node2);
    if (par[leaderA] = leaderB)
    {
        return;
    }

    if (groupSize[leaderA] > groupSize[leaderB])
    {
        par[leaderB] = leaderA;
        groupSize[leaderA] += groupSize[leaderB];
    }
    else
    {
        par[leaderA] = leaderB;
        groupSize[leaderB] += groupSize[leaderA];
    }
}

int main()
{
    int n;
    cin >> n;
    dsu_initialize(n);
    return 0;
}
