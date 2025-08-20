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

    return 0;
}
