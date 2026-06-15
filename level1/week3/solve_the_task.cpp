#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> a(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    long long best = a[1] * 1;  // best value of a[i] * i so far
    long long ans = LLONG_MIN;

    for (int j = 2; j <= n; j++) {
        ans = max(ans, best - a[j] * j);
        best = max(best, a[j] * j);
    }

    cout << ans << endl;
    return 0;
}
