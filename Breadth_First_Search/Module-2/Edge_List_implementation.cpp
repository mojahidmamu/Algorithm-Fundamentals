#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, E;
    cin >> N >> E;
    vector<pair<int, int>> edge_list;
    while (E--)
    {
        int a, b;
        cin >> a >> b;
        edge_list.push_back({a, b});
    }

    for (auto x : edge_list)
    {
        cout << x.first << " " << x.second << endl;
    }
   
    return 0;
}
    