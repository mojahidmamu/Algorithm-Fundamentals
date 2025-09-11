#include <bits/stdc++.h>
using namespace std;
void recursion(int N)
{
    if (N == 0)
    {
        return;
    }
    recursion(N - 1);
    cout << N << endl;
}
int main()
{
    int N;
    cin >> N;
    recursion(N);
    return 0;
}
