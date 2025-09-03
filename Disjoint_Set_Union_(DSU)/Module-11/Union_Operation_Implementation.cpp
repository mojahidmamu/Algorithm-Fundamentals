#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int par[N];
int groupSize[N];

// DSU-(find):  
int DSU_find(int node)
{
    if (par[node] == -1)
    {
        return node;
    }
    return DSU_find(par[node]);
}

// DSU-(union): Time Complexity= O(N)
int DSU_union(int node1, int node2)
{
     int leaderA = DSU_find(node1);
     int leaderB = DSU_find(node2);
     par[leaderA] = leaderB;
}
int main()
{
    
    return 0;
}
