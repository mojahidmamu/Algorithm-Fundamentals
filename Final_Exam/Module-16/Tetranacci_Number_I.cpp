#include <bits/stdc++.h>
using namespace std;

int Dp[100];

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1 || n == 2)
    {
        return 1;
    }
    if (n == 3)
    {
        return 2;
    }
    if (Dp[n] != -1)
    {
        return Dp[n];
    }
    else
    {
        return Dp[n] = fibonacci(n - 1) + fibonacci(n - 2) + fibonacci(n - 3) + fibonacci(n - 4);
    }
}

int main()
{
    memset(Dp, -1, sizeof(Dp));
    int N;
    cin >> N;
    cout << fibonacci(N) << endl;
    return 0;
}
// Accepted: 
