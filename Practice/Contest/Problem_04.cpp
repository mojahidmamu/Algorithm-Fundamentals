#include <bits/stdc++.h>
using namespace std;

int eraseTheTwins(string &s)
{
    stack<char> st;
    for (char c : s)
    {
        if (!st.empty() && st.top() == c)
        {
            st.pop();
        }
        else
        {
            st.push(c);
        }
    }
    return st.size();
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
        int N;
        cin >> N;
        string s;
        cin >> s;

        int result = eraseTheTwins(s);
        cout << result << "\n";
    }

    return 0;
}
