#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;

        int freq[7] = {0};
        for (char ch : s)
        {
            freq[ch - 'A']++;
        }

        int count = 0;
        for (int i = 0; i < 7; i++)
        {
            if (freq[i] < m)
            {
                count += m - freq[i];
            }
        }

        cout << count << endl;
    }

    return 0;
} 