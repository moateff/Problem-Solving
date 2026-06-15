#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> grid(n);
    for (int i = 0; i < n; i++)
        cin >> grid[i];

    // 8 directions (horizontal, vertical, diagonal)
    int dx[8] = { -1, -1, -1,  0, 0,  1, 1, 1 };
    int dy[8] = { -1,  0,  1, -1, 1, -1, 0, 1 };

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

            if (grid[i][j] != '.') continue;

            for (int d = 0; d < 8; d++) {
                int ni = i + dx[d];
                int nj = j + dy[d];

                if (ni >= 0 && ni < n && nj >= 0 && nj < m) {
                    if (grid[ni][nj] == '.') {
                        cout << "YES";
                        return 0;
                    }
                }
            }
        }
    }

    cout << "NO";
    return 0;
}
