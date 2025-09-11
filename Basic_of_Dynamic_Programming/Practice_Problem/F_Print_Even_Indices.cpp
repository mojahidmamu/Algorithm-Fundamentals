#include <bits/stdc++.h>
using namespace std;
void recursion(int &N)
{
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    for (int i = N-1; i >= 0; i--)
    {
        if (i % 2 == 0)
        {
            cout << arr[i] << " ";
        }
    }
}
int main()
{
    int N;
    cin >> N;
    recursion(N);

    return 0;
}
