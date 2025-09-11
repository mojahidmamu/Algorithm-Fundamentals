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

        int consecutive = 0;
        for (char ch : s)
        {
            if (ch == '.')
            {
                consecutive++;
            }
        }
        if (consecutive == 3)
        {
            cout << 2 << endl;
        }
        else
        {
            cout <<
        }
    }
    return 0;
}
