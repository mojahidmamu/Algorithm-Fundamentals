#include <bits/stdc++.h>
using namespace std;

bool isEqual(int a, int b, int c)
{
}

int main()
{
    int TestCase;
    cin >> TestCase;
    while (TestCase--)
    {
        int a, b, c;
        cin >> a >> b >> c;

       bool result =  isEqual(a, b, c);

        if (result == true)
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
