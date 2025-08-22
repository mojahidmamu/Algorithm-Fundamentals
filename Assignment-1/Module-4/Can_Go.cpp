#include <bits/stdc++.h>
char arr[1005][1005];
// visited array:
bool vis[20][20];
using namespace std;
int main()
{
    int N, M;
    cin >> N >> M;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> arr[i][j];
        }
    }

    memset(vis, false, sizeof(vis));
    
    return 0;
}
