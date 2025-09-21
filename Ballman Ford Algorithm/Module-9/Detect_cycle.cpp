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

const int N = 1e5 + 5;
int dis[N];

int main()
{

    int n, e;
    cin >> n >> e;
    vector<Edge> edge_list;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        edge_list.push_back(Edge(a, b, c));
    }

    for (int i = 0; i < n; i++)
    {
        dis[i] = INT_MAX;
    }

    dis[0] = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (auto ed : edge_list)
        {
            int a, b, c;
            a = ed.a;
            b = ed.b;
            c = ed.c;
            if (dis[ed.a] != INT_MAX && dis[ed.a] + ed.c < dis[ed.b])
            {
                {
                    dis[b] = dis[a] + c;
                }
            }
        }

        // Check for negative cycle
        bool cycle = false;
        for (Edge ed : edge_list)
        {
            int a, b, c;
            a = ed.a;
            b = ed.b;
            c = ed.c;

            if (dis[ed.a] != INT_MAX && dis[ed.a] + ed.c < dis[ed.b])
            {
                cycle = true;
                break;
            }
        }

        if (cycle)
        {
            cout << "Cycle found. No answer" << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                cout << i << " -> " << dis[i] << endl;
            }
        }

               return 0;
    }
}