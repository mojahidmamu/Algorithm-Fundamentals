#include <bits/stdc++.h>
using namespace std;

bool frog1(int n)
{
}

bool frog2(int n)
{
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;

        if (frog1(n) && frog2(n))
        {
            cout << "Both" << endl;
        }
        else if (frog1(n))
        {
            cout << "Leapy" << endl;
        }
        else if (frog2(n))
        {
            cout << "Jumpster" << endl;
        }
        else
        {
            cout << "None" << endl;
        }
    }

    return 0;
}
