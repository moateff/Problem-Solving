#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> a(n), suff(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // build suffix max
    suff[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        suff[i] = max(a[i], suff[i + 1]);
    }

    while (q--) {
        int x;
        cin >> x;
        cout << suff[n - x] << endl;
    }

    return 0;
}