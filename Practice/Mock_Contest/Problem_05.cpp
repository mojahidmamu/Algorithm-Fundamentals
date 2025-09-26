#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int ans = 0;
        string s;
        cin >> s;
        while (n)
        {
            n /= 2;
            ans++;
        }
        cout << ans << endl ;
    }

    return 0;
}

