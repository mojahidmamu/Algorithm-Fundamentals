#include <bits/stdc++.h>
using namespace std;
void recursion(int N)
{
    if (N < 1)
    {
        return;
    }

    cout << "I love Recursion" << endl;
    recursion(N - 1);
}
int main()
{
    int N;
    cin >> N;
    recursion(N);
    return 0;
}
