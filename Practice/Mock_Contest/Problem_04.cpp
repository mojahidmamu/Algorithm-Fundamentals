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

        bool leapy = frog1(n);
        bool jumster = frog2(n);

        if (leapy && jumster)
        {
            cout << "Both" << endl;
        }
        else if (leapy)
        {
            cout << "Leapy" << endl;
        }
        else if (jumster)
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
