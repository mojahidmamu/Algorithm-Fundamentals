#include <bits/stdc++.h>
using namespace std;

bool checkEqual(string s1, string s2)
{
    if (s1 == s2)
    {
        return true;
    }


}

int main()
{
    int TestCase;
    cin >> TestCase;
    while (TestCase--)
    {
        string s1, s2;
        cin >> s1 >> s2;

        if (checkEqual(s1, s2) == true)
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
