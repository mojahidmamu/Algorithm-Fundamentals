#include <bits/stdc++.h>
using namespace std;
int N, M;
int arr[10][10];

int maxSum(int i, int j)
{
    if (i == N - 1 && j == M - 1)
    {
        return arr[i][j];
    }

    int down = INT_MIN, right = INT_MIN;

    if (i + 1 < N)
    {
        down = maxSum(i + 1, j);
    }

    if (j + 1 < M)
    {
        right = maxSum(i, j + 1);
    }
    return arr[i][j] + max(down, right);
}

int main()
{
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << maxSum(0, 0) << endl;
    return 0;
}