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
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + N);
        int mn = arr[0];
        int mx = arr[N - 1];

        int needOperation;

        if ((mn % 2 == 0 && mx % 2 == 0) || (mn % 2 == 1 && mx % 2 == 1))
        {
            needOperation = 0;
        }

        cout << needOperation << endl;
    }

    return 0;
}
