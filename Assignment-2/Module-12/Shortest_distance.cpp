#include <bits/stdc++.h>
using namespace std;

const long long INF = 1e18;

int main()
{
    int N, E;
    cin >> N >> E;
    vector<vector<long long>> adj_matrix(N, vector<long long>(N, INF));

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j)
            {
                adj_matrix[i][j] = 0;
            }
            else
            {
                adj_matrix[i][j] = INF;
            }
        }
    }

    while (E--)
    {
        int a, b;
        long long c;
        cin >> a >> b >> c;
        a--;
        b--;
        adj_matrix[a][b] = min(adj_matrix[a][b], c);
    }

    for (int k = 0; k < N; k++)
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                if (adj_matrix[i][k] < INF && adj_matrix[k][j] < INF)
                {
                    adj_matrix[i][j] = min(adj_matrix[i][j], adj_matrix[i][k] + adj_matrix[k][j]);
                }
            }
        }
    }

    int Query;
    cin >> Query;
    for (int i = 0; i < Query; i++)
    {
        int src, dst;
        cin >> src >> dst;
        src--;
        dst--;
        long long min_cost = adj_matrix[src][dst];
        if (min_cost == INF)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << min_cost << endl;
        }
    }
    return 0;
}
// Accepted: 25