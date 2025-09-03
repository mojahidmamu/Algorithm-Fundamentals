#include <bits/stdc++.h>
using namespace std;

// DSU-(find): Time Complexity= O(N)
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
