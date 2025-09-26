#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        map<int, int> mp;
        vector<int> arr(N);
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
            mp[arr[i]];
        }

        bool isGood = false;
        for (int x : arr)
        {
            mp[x]++;
        }

        if (mp.size() == 1)
        {
            isGood = true;
        }
        else if (mp.size() > 2)
        {
            isGood = false;
        }
        else if (mp.size() == 2)
        {
            vector<int> v;
            for (auto p : mp)
            {
                v.push_back(p.second);
            }
            if (abs(v[0] - v[1]) > 1)
            {
                isGood = false;
            }
            else
            {
                isGood = true;
            }
        }

        if (isGood == true)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}
