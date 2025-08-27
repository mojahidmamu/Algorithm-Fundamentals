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

        for (int i = 0; i < N; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;

        int mn = INT_MAX;
        int mx = INT_MIN;
        for (int i = 0; i < N; i++)
        {
            if (arr[i] < arr[mn])
            {
                mn = arr[i];
                break;
            }
            if (arr[mx] < arr[i])
            {
                mx = arr[i];
                break;
            }
        }
    }

    return 0;
}
