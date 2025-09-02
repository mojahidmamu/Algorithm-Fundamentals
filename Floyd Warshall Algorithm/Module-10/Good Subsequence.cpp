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

        for (int i = 1; i <= N; i++)
        {
            if (arr[i] % 2 != arr[i - 1] % 2)
            {
                
            }
        }
    }

    return 0;
}
