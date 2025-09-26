#include <bits/stdc++.h>
using namespace std;

bool isLucky(long long int N)
{
    while (N > 0)
    {
        if (N % 10 == 7)
        {
            return true;
        }
        N /= 10;
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    long long int N;
    cin >> N;

    if (isLucky(N))
    {
        cout << "Lucky" << endl;
    }
    else
    {
        cout << "Not Lucky" << endl;
    }

    return 0;
}
