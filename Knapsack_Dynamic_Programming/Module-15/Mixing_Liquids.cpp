#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int res = 0;

    while (true)
    {
        a--;
        b -= 2;
        if (a < 0 || b < 0)
        {
            break;
        }
        res += 3;
    }
    cout << res << endl;

    return 0;
}
