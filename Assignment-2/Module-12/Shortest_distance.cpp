#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> adj_list[1005]; // array of vector with every index have a pair(int, int)
int dis[1005];

void dijkstra(int source, int N)
{
    for (int i = 1; i <= N; i++)
    {
        dis[i] = INT_MAX;
    }
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;

    dis[source] = 0;
    q.push({0, source});

    while (!q.empty())
    {
        auto par = q.top(); // auto for access one pair<int, int>
        q.pop();

        int par_dis = par.first;
        int par_node = par.second;

        if (par_dis > dis[par_node])
        {
            continue; 
        }

        for (auto child : adj_list[par_node])
        {
            int child_node = child.first;
            int child_dis = child.second;

            if (par_dis + child_dis < dis[child_node])
            {
                dis[child_node] = par_dis + child_dis;
                q.push({dis[child_node], child_node});
            }
        }
    }
}

int main()
{
    int N, E;
    cin >> N >> E;
    while (E--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj_list[a].push_back({b, c});
    }

    int Query;
    cin >> Query;
    for (int i = 0; i < Query; i++)
    {
        int src, dst;
        cin >> src >> dst;
        dijkstra(src, N);
        if (dis[dst] == INT_MAX)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << dis[dst] << endl;
        }
    }
    return 0;
}
