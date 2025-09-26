#include <bits/stdc++.h>
using namespace std;

bool frog1(int n)
{
    if (n < 3 || n == 5)
    {
        return false;
    }
    return true;
}

bool frog2(int n)
{
    if (n < 3 || n == 4 || n == 7)
    {
        return false;
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---

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
