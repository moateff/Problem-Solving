#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> a(n), pref(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    // build prefix gcd
    pref[0] = a[0];
    for (int i = 1; i < n; i++) {
        pref[i] = gcd(pref[i - 1], a[i]);
    }

    while (q--) {
        int x;
        cin >> x;
        cout << pref[x - 1] << endl;
    }
    
    return 0;
}