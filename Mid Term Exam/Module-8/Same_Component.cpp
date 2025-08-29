#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, M;
    cin >> N >> M;
    vector<string> grid(N);

    for (int i = 0; i < N; i++)
    {
         cin >> grid[i];
    } 
    int Si, Sj;
    cin >> Si >> Sj;
    int Di, Dj;
    cin >> Di >> Dj;

    for (int i = 0; i < N; i++)
    {
        cout << grid[i] << endl;
    }

    return 0;
}
