#include <bits/stdc++.h>
using namespace std;

// Directions for movement: right, left, up, down
vector<pair<int, int>> directions = {
    {0, 1}, {0, -1}, {-1, 0}, {1, 0}};

int n;

// Check if (x, y) is inside the grid
bool isValid(int x, int y, int n)
{
    return (x >= 0 && x < n && y >= 0 && y < n);
}

// BFS to find shortest path from (sx, sy) to all reachable cells
vector<vector<int>> bfs(vector<string> &grid, int sx, int sy)
{
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    vector<vector<int>> dist(n, vector<int>(n, -1));

    queue<pair<int, int>> q;
    q.push({sx, sy});
    visited[sx][sy] = true;
    dist[sx][sy] = 0;

    while (!q.empty())
    {
        auto [x, y] = q.front();
        q.pop();

        for (auto [dx, dy] : directions)
        {
            int nx = x + dx;
            int ny = y + dy;

            if (isValid(nx, ny, n) && !visited[nx][ny] && grid[nx][ny] != 'T')
            {
                visited[nx][ny] = true;
                dist[nx][ny] = dist[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }

    return dist;
}

int main()
{
    int N;
    cin >> N;
    char arr[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> arr[i][j];
        }
    }

    return 0;
}
