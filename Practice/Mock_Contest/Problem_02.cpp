#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    multiset<int> ms;
    while (T--)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
           long long int x;
            cin >> x;
            ms.insert(x);
        }
        else if (n == 2)
        {
            if (ms.empty())
            {
                cout << "empty" << endl;
            }
            else {
                int mn = *ms.begin();
                cout << mn << endl;
                ms.erase(mn);
            }
            
        }
    }

    return 0;
}
