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
        vector<bool> leapy(n + 1, false);
        vector<bool> jumpster(n + 1, false);

        // Base case
        leapy[0] = true;
        jumpster[0] = true;

        // DP for Leapy
        for (int i = 1; i <= n; i++)
        {
            if (i >= 3)
                leapy[i] || leapy[i - 3];
            if (i >= 4)
                leapy[i] || leapy[i - 4];
        }

        // DP for Jumpster
        for (int i = 1; i <= n; i++)
        {
            if (i >= 3)
                jumpster[i] || jumpster[i - 3];
            if (i >= 5)
                jumpster[i] || jumpster[i - 5];
        }

        if (leapy[n] && jumpster[n])
        {
            cout << "Both" << endl;
        }
        else if (leapy[n])
        {
            cout << "Lea" << endl;
        }
        else if (jumpster[n])
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

