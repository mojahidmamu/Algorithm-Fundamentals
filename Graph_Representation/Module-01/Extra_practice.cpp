#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, E; // N for Node and E for Edge
    cin >> N >> E;
    int adj_mat[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            adj_mat[i][j] = 0;
        }
    }

    // for diagonal:
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j)
            {
                adj_mat[i][j] = 1;
            }
        }
    }

    while (E--)
    {
        int a, b;
        cin >> a >> b;
        adj_mat[a][b] = 1;
        adj_mat[b][a] = 1; // only for undirected
    }

    // print:
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << adj_mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
