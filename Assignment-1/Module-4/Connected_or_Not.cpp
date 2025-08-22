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
        if (A == B)
        {
            cout << "YES" << endl;
            continue;
        }

        bool found = false;
        for (int val : adj_list[A])
        {

            if (val == B)
            {
                found = true;
                break;
            }
        }

        if (found == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}

// Accepted