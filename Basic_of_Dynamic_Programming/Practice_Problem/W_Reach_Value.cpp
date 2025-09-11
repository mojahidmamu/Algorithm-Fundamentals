#include <bits/stdc++.h>
using namespace std;

int canReach(int current, int N)
{
    if (current == N)
    {
        return true;
    }
    if (current > N)
    {
        return false;
    }
    else
    {
        return canReach(current * 10, N) || canReach(current * 20, N);
    }
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        if (canReach(1, N))
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
