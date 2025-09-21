#include <bits/stdc++.h>
using namespace std;
int main()
{
    int TestCase;
    cin >> TestCase;
    while (TestCase--)
    {
        int N;
        cin >> N;
        string s;
        cin >> s;

        int one = count(s.begin(), s.end(), '1');

        int ans = 0;
        for (char ch : s)
        {
            if (ch == '1')
            {
                ans += one - 1;
            }
            else
            {
                ans += one + 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
