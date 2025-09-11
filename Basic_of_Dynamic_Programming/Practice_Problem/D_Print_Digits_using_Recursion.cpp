#include <bits/stdc++.h>
using namespace std;

void printDigit(int N)
{
    if (N < 10)
    {
        cout << N;
        return;
    }
    else
    {
        printDigit(N / 10);
        cout << " " << N % 10;
    }
}

int main()
{
    int TestCase;
    cin >> TestCase;
    while (TestCase--)
    {
        int N;
        cin >> N;
        printDigit(N);
        cout << endl;
    }

    return 0;
}
