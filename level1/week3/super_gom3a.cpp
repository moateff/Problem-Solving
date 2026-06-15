#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;
    long long X;
    cin >> N >> M >> X;

    vector<string> grid(N);
    for (int i = 0; i < N; i++)
        cin >> grid[i];

    long long steps = min(X, (long long)N);

    while (steps--) {
        vector<string> next = grid;

        for (int i = N - 2; i >= 0; i--) {
            for (int j = 0; j < M; j++) {
                if (grid[i][j] == 'B' && grid[i + 1][j] == '.') {
                    next[i][j] = '.';
                    next[i + 1][j] = 'B';
                }
            }
        }

        grid = next;
    }

    for (auto &row : grid)
        cout << row << "\n";

    return 0;
}