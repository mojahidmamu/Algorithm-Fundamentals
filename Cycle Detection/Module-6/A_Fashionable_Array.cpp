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

        if ((mn % 2 == 0 && mx % 2 == 0) || (mn % 2 == 1 && mx % 2 == 1))
        {
            cout << "0" << endl;
        }
        else
        {
            int i = 0;
            int needOperation1 = 0;
            while (arr[i] % 2 != mx % 2)
            {
                i++;
                needOperation1++;
            }
            //
            int j = N - 1;
            int needOperation2 = 0;
            while (mn % 2 != arr[j] % 2)
            {
                j--;
                needOperation2++;
            }

            int FinalOperation = min(needOperation1, needOperation2);
            cout << FinalOperation << endl;
        }
    }

    return 0;
}
