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
        auto par = q.front();
        int x = par.first;
        int y = par.second;
        q.pop();

        for (auto child : directions)
        {
            int dx = child.first;
            int dy = child.second;
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
    while (cin >> n)
    {
        vector<string> grid(n);
        int startX, startY, endX, endY;

        for (int i = 0; i < n; i++)
        {
            cin >> grid[i];
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 'S')
                {
                    startX = i;
                    startY = j;
                }
                if (grid[i][j] == 'E')
                {
                    endX = i;
                    endY = j;
                }
            }
        }

        vector<vector<int>> dist = bfs(grid, startX, startY);

        cout << dist[endX][endY] << endl;
    }
    return 0;
}
