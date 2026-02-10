#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> grid(n);
    for (int i = 0; i < n; i++)
        cin >> grid[i];

    int minRow = n, maxRow = -1;
    int minCol = m, maxCol = -1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '#') {
                if (i < minRow) minRow = i;
                if (i > maxRow) maxRow = i;
                if (j < minCol) minCol = j;
                if (j > maxCol) maxCol = j;
            }
        }
    }

    int height = maxRow - minRow + 1;
    int width  = maxCol - minCol + 1;

    int perimeter = 2 * (height + width);

    cout << perimeter << endl;

    return 0;
}
