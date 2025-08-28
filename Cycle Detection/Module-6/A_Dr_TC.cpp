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

        int count = 0;
        for (char ch : s)
        {
            if (ch == '1')
            {
                count++;
            }
        }

        int ans = 0;
        for (char ch : s)
        {
            if (ch == '1')
            {
                ans += count - 1;
            }
            else
            {
                ans += count + 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
