#include <bits/stdc++.h>
using namespace std;

long long rangeSUm(long long int n)
{
    return ((n * (n + 1)) / 2);
}

long long SUM(int L, int R)
{
    return rangeSUm(R) - rangeSUm(L - 1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    long long int N, T;
    cin >> N >> T;
    while (T--)
    {
        int L, R;
        cin >> L >> R;

        int x = (L + 1) / 2;
        int y = (R + 1) / 2;
        long long ans = (2 * SUM(x, y));

        if (L % 2 == 0)
        {
            ans -= x;
        }
        if (R % 2 != 0)
        {
            ans -= y;
        }
        cout << ans << endl;
    }

    return 0;
}
