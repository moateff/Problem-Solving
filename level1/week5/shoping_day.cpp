#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<long long> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    sort(p.rbegin(), p.rend());

    // prefix sums
    vector<long long> pref(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        pref[i] = pref[i - 1] + p[i - 1];
    }

    while (q--) {
        int x, y;
        cin >> x >> y;

        long long ans = pref[x] - pref[x - y];
        cout << ans << endl;
    }
    
    return 0;
}