#include <bits/stdc++.h>
using namespace std;

int  BFS(int src, int dst)
{
    
}

int main()
{
    int N, E;
    cin >> N >> E;
    vector<int> path[N];
    while (E--)
    {
        int a, b;
        cin >> a >> b;
        path[a].push_back(b);
        path[b].push_back(a);
    }

    int Q;
    cin >> Q;
    while (Q--)
    {
        int src, dst;
        cin >> src >> dst;
        BFS(src, dst);
    }
    
    
    return 0;
}
