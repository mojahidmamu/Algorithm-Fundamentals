#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int adj_list[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            adj_list[i][j] = 0;
        }
    }

    // for diagonal:
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                adj_list[i][j] = 1;
            }
        }
    }

    adj_list[0][1] = 1;
    adj_list[1][0] = 1;
    adj_list[1][2] = 1;
    adj_list[2][1] = 1;

    // Print Matrix
    cout << "Adjacency Matrix:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << adj_list[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
