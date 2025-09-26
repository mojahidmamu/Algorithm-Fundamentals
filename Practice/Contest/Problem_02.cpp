#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    int N;
    cin >> N;
    long long int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    // sort(arr, arr + N);
    map<long long, pair<int, int>> mp;
    for (int i = 0; i < N; i++)
    {
        if (mp.find(arr[i]) == mp.end())
        {
            mp[arr[i]] = {i+1, i+1};
        }
        else
        {
            mp[arr[i]].second = i +1;
        }
    }

    for (auto &p : mp)
    {
        cout << p.first << " " << p.second.first << " " << p.second.second << endl;
    }

    return 0;
}
