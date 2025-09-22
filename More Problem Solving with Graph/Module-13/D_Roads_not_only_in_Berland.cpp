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

int main()
{

    return 0;
}
