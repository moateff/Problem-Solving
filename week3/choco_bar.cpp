#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<long long>> a(n, vector<long long>(m));

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    long long ans = 0;

    // check rows
    for (int i = 0; i < n; i++) {
        long long sum = 0;
        for (int j = 0; j < m; j++)
            sum += a[i][j];
        ans = max(ans, sum);
    }

    // check columns
    for (int j = 0; j < m; j++) {
        long long sum = 0;
        for (int i = 0; i < n; i++)
            sum += a[i][j];
        ans = max(ans, sum);
    }

    cout << ans;
    return 0;
}
