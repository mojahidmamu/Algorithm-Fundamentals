#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // --- your code here ---
    vector<int> v;
    v.push_back(5);
    v.push_back(10);
    v.push_back(20);

    sort(v.begin(), v.end());                         // sort
    reverse(v.begin(), v.end());                      // reverse order
    cout << *max_element(v.begin(), v.end()) << endl; // max
    cout << *min_element(v.begin(), v.end()) << endl; // min
    // sort(v.rbegin(), rend());
    // reverse(v.begin(), v.end());
    // *max_element(v.begin(), v.end());
    // *min_element(v.begin(), v.end());
    // binary_search(v.begin(), v.end(), x); // findout x form sorted array
    cout << "total sum of " <<  accumulate(v.begin(), v.end(), 0) << endl;

    return 0;
}
