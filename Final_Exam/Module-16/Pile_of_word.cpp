#include <bits/stdc++.h>
using namespace std;

bool checkEqual(string s1, string s2)
{
    if (s1.size() != s2.size())
    {
        return false;
    }
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if (s1 == s2)
    {
        return true;
    }
    return false;
}

int main()
{
    int TestCase;
    cin >> TestCase;
    while (TestCase--)
    {
        string s1, s2;
        cin >> s1 >> s2;

        if (checkEqual(s1, s2))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
// Accepted: 