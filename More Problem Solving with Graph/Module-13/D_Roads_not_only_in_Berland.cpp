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

    vector<pair<int, int>> bad;
    vector<pair<int, int>> create;

    while (n--)
    {
        int a, b;
        cin >> a >> b;

        int LeaderA = DSU_find(a);
        int LeaderB = DSU_find(b);
        if (LeaderA == LeaderB)
        {
            bad.push_back({a, b});
        }
        else
        {
            DSU_union(a, b);
        }
    }

    for (int i = 2; i <= n; i++)
    {
        int leaderA = DSU_find(1);
        int leaderB = DSU_find(i);

        if (leaderA != leaderB)
        {
            create.push_back({1, i});
            DSU_union(1, i);
        }
    }

    // output
    cout << bad.size() << endl;
    for (int i = 0; i < bad.size(); i++)
    {
        cout << bad[i].first << " " << bad[i].second << " "
             << create[i].first << " " << create[i].second << endl;
    }

    return 0;
}
