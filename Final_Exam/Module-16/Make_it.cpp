#include <bits/stdc++.h>
using namespace std;

// bool canReach(long long int current)
// {
//     if (current == N)
//     {
//         return true;
//     }
//     if (current > N)
//     {
//         return false;
//     }
//     // bool l = canReach(current + 3);
//     // bool r = canReach(current * 2);
//     // return l || r;
//     return canReach(current + 3) || canReach(current * 2);
// }
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long int N;
        cin >> N;
        if (N % 4 == 3)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }

        // if (canReach(1))
        // {
        //     cout << "YES" << endl;
        // }
        // else
        // {
        //     cout << "NO" << endl;
        // }
    }

    return 0;
}
//