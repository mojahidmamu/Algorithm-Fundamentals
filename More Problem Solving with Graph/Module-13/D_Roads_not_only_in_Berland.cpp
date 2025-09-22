#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int parent[N];
int group_size[N];


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
