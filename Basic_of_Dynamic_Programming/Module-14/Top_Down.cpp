#include <bits/stdc++.h>
using namespace std;

int Dp[100];

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    if (Dp[n] != -1)
    {
        return Dp[n];
    }
    else
    {
        return Dp[n] =  fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    memset(Dp, -1, sizeof(Dp));
    cout << fibonacci(10) << endl;
    return 0;
}
