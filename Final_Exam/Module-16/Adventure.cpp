#include <bits/stdc++.h>
using namespace std;

int N, W;
int weight[25], value[25];
int dp[25][105];

int Knapsack(int i, int w)
{
    if (i == N)
    {
        return 0;
    }
    if (w == 0)
    {
        return 0;
    }

    if (dp[i][w] != -1)
    {
        return dp[i][w];
    }

    // opt-1:
    int ans = Knapsack(i + 1, w);
    // opt-2:
    if (weight[i] <= w)
    {
        ans = max(ans, value[i] + Knapsack(i + 1, w - weight[i]));
    }

    return dp[i][w] = ans;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, W;
        cin >> N >> W;
        int weight_arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> weight_arr[i];
        }

        int value_arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> value_arr[i];
        }

        memset(dp, -1, sizeof(dp));
        cout << Knapsack(0, W);
    }

    return 0;
}
