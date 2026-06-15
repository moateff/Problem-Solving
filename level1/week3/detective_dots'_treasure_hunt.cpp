#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> grid(n);
    for (int i = 0; i < n; i++)
        cin >> grid[i];

    int i = 0, j = 0;   // start at (1,1) -> (0,0)
    int steps = 0;

    while (grid[i][j] != 'T') {
        char c = grid[i][j];

        if (c == 'N') i--;
        else if (c == 'S') i++;
        else if (c == 'E') j++;
        else if (c == 'W') j--;

        steps++;
    }

    cout << steps << endl;

    return 0;
}
