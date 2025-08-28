#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> adj_list[1005]; // array of vector with every index have a pair(int, int)
int dis[1005];

void dijkstra(int source)
{
    queue<pair<int, int>> q;
    q.push({source, 0});
    dis[source] = 0;
    while (!q.empty())
    {
        auto par = q.front(); // auto for access one pair<int, int>
        q.pop();
        int par_node = par.first;
        int par_dis = par.second;

        for (auto child : adj_list[par_node])
        {
            int child_node = child.first;
            int child_dis = child.second;

            if (par_dis + child_dis < dis[child_node])
            {
                dis[child_node] = par_dis + child_dis;
                q.push({child_node, dis[child_node]});
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
        adj_list[b].push_back({a, c});
    }

    for (int i = 0; i < N; i++)
    {
        dis[i] = INT_MAX;
    }
    dijkstra(0);
    for (int i = 0; i < N; i++)
    {
        cout << i << " -> " << dis[i] << endl;
    }

    return 0;
}
