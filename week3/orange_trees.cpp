#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<long long>> a(n, vector<long long>(n));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    long long sum = 0;

    // left and right vertical lines
    for (int i = 0; i < n; i++) {
        sum += a[i][0];
        sum += a[i][n - 1];
    }

    int mid = n / 2;

    // left diagonal from top to the middle (excluding the first cell)
    for (int i = 1; i <= mid; i++) {
        sum += a[i][i];
    }

    // right diagonal from top to the middle (excluding first and middle)
    for (int i = 1; i < mid; i++) {
        sum += a[i][n - 1 - i];
    }

    cout << sum << endl;
    return 0;
}
