#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, E;
    cin >> N >> E;

    vector<pair<int, int>> adj_list[N]; // array of vector with every index have a pair(int, int)
    while (E--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj_list[a].push_back({b, c});
        adj_list[b].push_back({a, c});
    }

    for (int i = 0; i < N; i++)
    {
        cout << i << " -> ";
        for (auto  p : adj_list[i])
        {
            cout << p.first << " " << p.second << ", ";
        }
       cout << endl;
    }

    return 0;
}
