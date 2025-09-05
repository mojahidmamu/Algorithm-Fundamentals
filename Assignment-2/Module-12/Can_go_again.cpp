#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int a, b, c;
    Edge(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};
const int INF = 1e9;

 
int main()
{
    int N, E;
    cin >> N >> E;
    vector<Edge> edge_list;
    while (E--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        edge_list.push_back(Edge(a, b, c));
    }
    int source;
    cin >> source;

     
    vector<int> dis(N + 1, INF);
    dis[source] = 0;

    for (int i = 1; i <= N - 1; i++)
    {
        for (auto &ed : edge_list)
        {
            int a, b, c;
            a = ed.a;
            b = ed.b;
            c = ed.c;
            if (dis[a] != INF && dis[a] + c < dis[b])
            {
                dis[b] = dis[a] + c;
            }
        }
    }

    for (auto &ed : edge_list)
    {
        if (dis[ed.a] != INF && dis[ed.a] + ed.c < dis[ed.b])
        {
            cout << "Negative Cycle Detected" << endl;
            return 0;
        }
    }

    int TestCase;
    cin >> TestCase;
    while (TestCase--)
    {
        int dst;
        cin >> dst;
        if (dis[dst] == INF)
        {
            cout << "Not Possible" << endl;
        }
        else
        {
            cout << dis[dst] << endl;
        }
    }

    return 0;
}
// Accepted: 21.76