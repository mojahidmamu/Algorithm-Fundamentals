// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int TestCase;
//     cin >> TestCase;
//     while (TestCase--)
//     {
//         int a, b, c;
//         cin >> a >> b >> c;

//        int total = a + b + c;

//         if (total % 3 == 0 && b <= total / 3)
//         {
//             cout << "YES" << endl;
//         }
//         else
//         {
//             cout << "NO" << endl;
//         }
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int sum = a + b + c;
        if (sum % 3 != 0)
        {
            cout << "NO" << endl;
            continue;
        }

        int target = sum / 3;

        if (target >= a && target >= b && target <= c)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
