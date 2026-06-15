#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> grid(n);
    for (int i = 0; i < n; i++) 
        cin >> grid[i];

    int sx = -1, sy = -1, ex = -1, ey = -1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 'S') {
                sx = i; sy = j;
            }
            if (grid[i][j] == 'E') {
                ex = i; ey = j;
            }
        }
    }

    vector<vector<bool>> visited (n, vector<bool>(m, false));
    vector<vector<pair<int,int>>> parent(n, vector<pair<int,int>>(m, {-1,-1}));
    vector<vector<char>> moveTaken(n, vector<char>(m));

    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};
    char dir[4] = {'U', 'D', 'L', 'R'};

    queue<pair<int,int>> q;
    q.push({sx, sy});
    visited[sx][sy] = true;

    while (!q.empty()) {
        auto [x, y] = q.front();
        q.pop();

        if (x == ex && y == ey)
            break;

        for (int k = 0; k < 4; k++) {
            int nx = x + dx[k];
            int ny = y + dy[k];

            if (nx < 0 || nx >= n || ny < 0 || ny >= m)
                continue;

            if (visited[nx][ny])
                continue;

            if (grid[nx][ny] == '#')
                continue;

            visited[nx][ny] = true;
            parent[nx][ny] = {x, y};
            moveTaken[nx][ny] = dir[k];
            q.push({nx, ny});
        }
    }


    // Reconstruct the path
    string answer;
    int x = ex, y = ey;

    while (!(x == sx && y == sy)) {
        answer.push_back(moveTaken[x][y]);
        auto p = parent[x][y];
        x = p.first;
        y = p.second;
    }

    reverse(answer.begin(), answer.end());
    cout << answer << endl;

    return 0;
}