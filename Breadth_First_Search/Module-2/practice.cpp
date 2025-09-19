#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, E;
    cin >> N >> E;
    // vector<int> adj[N];
    // while (E--)
    // {
    //     int a, b;
    //     cin >> a >> b;
    //     adj[a].push_back(b);
    //     adj[b].push_back(a);
    // }

    // for (int i = 0; i < N; i++)
    // {
    //     for (int val : adj[N])
    //     {
    //         cout << val << " ";
    //     }
    //     cout << endl;
    // }

    // Edge List;
    vector<pair<int, int>> adj;
    while (E--)
    {
        int a, b;
        cin >> a >> b;
        adj.push_back({a, b});
    }
    for (auto val : adj)
    {
        cout << val.first << " " << val.second;
    }

    return 0;
}
