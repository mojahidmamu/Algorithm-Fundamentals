#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int arr[N];
    int mx = INT_MIN;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < N; i++)
    {
        if (arr[i] > mx)
        {
            mx = arr[i];
        }
    }
    cout << mx << endl;

    return 0;
}
