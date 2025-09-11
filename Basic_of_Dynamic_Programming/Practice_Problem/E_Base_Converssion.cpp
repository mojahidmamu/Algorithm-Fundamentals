#include <bits/stdc++.h>
using namespace std;
void recursion(int N)
{
    if (N == 0)
    {
        return;
    }
    recursion(N / 2);
    cout << (N % 2);
}
int main()
{
    int TestCase;
    cin >> TestCase;
    while (TestCase--)
    {
        int N;
        cin >> N;
        recursion(N);
    }

    return 0;
}
