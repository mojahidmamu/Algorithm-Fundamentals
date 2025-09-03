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

// DSU-(union): Time Complexity= O(N)
int DSU_union(int node1, int node2)
{
    int leaderA = DSU_find(node1);
    int leaderB = DSU_find(node2);
    par[leaderA] = leaderB;
}

int main()
{
    memset(par, -1, sizeof(par));
    
    DSU_union(1, 2);

    int result = DSU_find(4);
    cout << result << endl;
    return 0;
}
