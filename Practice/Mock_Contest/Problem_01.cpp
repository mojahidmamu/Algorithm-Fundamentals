#include <bits/stdc++.h>
using namespace std;

int foundBook(int n)
{
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long int target;
    cin >> target;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;

    int result = foundBook(n);
    cout << result << endl;
    

    return 0;
}
