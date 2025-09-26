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
        vector<char> v = {'a', 'e', 'i', 'o', 'u'};
        string ans = "";
        int i = 0;
        while (N--)
        {
            ans += v[i];
            i++;
            if (i == 5)
            {
                i = 0;
            }
        }
        sort(ans.begin(), ans.end());
        cout << ans << endl;
    }

    return 0;
}
