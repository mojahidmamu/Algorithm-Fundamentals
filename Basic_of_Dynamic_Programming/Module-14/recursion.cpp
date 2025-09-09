#include <bits/stdc++.h>
using namespace std;

void rec(int n)
{
    if (n > 5)
    {
        return;
    }
    rec(n + 1);
    cout << n << " ";
}

int main()
{
    rec(1);
    return 0;
}
