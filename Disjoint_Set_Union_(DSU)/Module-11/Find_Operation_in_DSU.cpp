#include <bits/stdc++.h>
using namespace std;

// DSU:
int DSU_find(int node)
{
    if (par[node] == -1)
    {
        return node;
    }
    return DSU_find(par[node]);
}

int main()
{

    return 0;
}
