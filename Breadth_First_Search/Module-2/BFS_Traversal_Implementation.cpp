#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, E;
    cin >> N >> E;
    vector<int> adj_list[N]; // array of vector

    while (E--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a); // for undirected
    }
    return 0;
}
