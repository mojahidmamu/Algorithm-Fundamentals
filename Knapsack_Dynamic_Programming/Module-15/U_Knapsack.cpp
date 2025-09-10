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
    cin >> N >> W;
    for (int i = 0; i < N; i++)
    {
        cin >> weight[i] >> value[i];
    }

    memset(dp, -1, sizeof(dp));
    cout << Knapsack(0, W);

    return 0;
}
