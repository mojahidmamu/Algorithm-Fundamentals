#include <bits/stdc++.h>
using namespace std;
int main()
{
    int TestCase;
    cin >> TestCase;
    while (TestCase--)
    {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 1; i <= N; i++)
        {
            cin >> arr[i];
        }

        int ans = 1;
        int last = arr[0] % 2;
        for (int i = 0; i < N; i++)
        {
            if (arr[i] % 2 != last)
            {
                ans++;
                last = arr[i] % 2;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
