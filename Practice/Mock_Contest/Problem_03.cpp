#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int N;
    int T;
    cin >> N ;
    cin >>  T;
    for (int i = 1; i <= T; i++)
    {
        int L, R;
        cin >> L >> R;
        int sum = 0;
        for (int j = L; j <= R; j++)
        {
            sum += j;
        }

        cout << sum << endl;
    }

    return 0;
}
