#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1005];
int main()
{
    int N, E;
    cin >> N >> E;
    while (E--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    // intput query:
    int Q;
    cin >> Q;
    while (Q--)
    {
        int testNode;
        cin >> testNode;
        
    }
    return 0;
}
