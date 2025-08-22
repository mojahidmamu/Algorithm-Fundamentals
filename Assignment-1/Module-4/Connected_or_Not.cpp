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
    }

    // intput query:
    int Q;
    cin >> Q;
    while (Q--)
    {
        int A, B;
        cin >> A >> B;

        if (adj_list[A].size(adj_list()))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
