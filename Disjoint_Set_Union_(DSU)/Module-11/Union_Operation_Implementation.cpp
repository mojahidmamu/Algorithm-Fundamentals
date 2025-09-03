#include <bits/stdc++.h>
using namespace std;

// DSU-(union):  
int DSU_union(int node)
{
    if (par[node] == -1)
    {
        return node;
    }
    return DSU_union(par[node]);
}

int main()
{
    
    return 0;
}
