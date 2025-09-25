#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        string S;
        cin >> S;

        vector<int> freq(26, 0);
        for (char c : S)
        {
            freq[c - 'a']++;
        }

        int ans = *min_element(freq.begin(), freq.end());
        cout << ans << endl;
    }

    return 0;
}
