#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, E;
    cin >> N >> E;
    vector<vector<int>> adj_list(N);
    while (E--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    for (int i = 0; i < N; i++)
    {
        sort(adj_list[i].begin(), adj_list[i].end(), greater<int>());
    }

    // intput query:
    int Q;
    cin >> Q;
    while (Q--)
    {
        int X;
        cin >> X;

        if (adj_list[X].empty())
        {
            cout << "-1" << endl;
        }
        else
        {
            for (int val : adj_list[X])
            {
                cout << val << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
// Accepted