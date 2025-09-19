#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, E;
    cin >> N >> E;
    vector<int> adj_list[N];

    while (E--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    int node;
    cin >> node;

    cout << adj_list[node].size() << endl;
    

    return 0;
}
