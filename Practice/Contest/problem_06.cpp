#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int N, Q;
    cin >> N >> Q;
    vector<int> arr(N);
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

   
    while (Q--)
    {
        int L, R;
        cin >> L >> R;
        L--;
        R--;

        unordered_set<int> st;
        for (int i = L; i <= R; i++)
        {
            st.insert(arr[i]);
        }

        int mex = 0;
        while (st.count(mex))
        {
            mex++;
        }
        cout << mex << "\n";
    }

    return 0;
}
