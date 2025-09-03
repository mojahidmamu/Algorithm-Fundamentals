#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int par[N];
int groupSize[N];

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
    memset(par, -1, sizeof(par));
    par[0] = 1;
    par[1] = 1;
    par[2] = 1;
    par[3] = 1;
    par[4] = 5;
    par[5] = 3;

    int result = DSU_find(4);
    cout << result << endl;
    return 0;
}
