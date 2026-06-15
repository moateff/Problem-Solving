#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<long long> pref(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        pref[i] = pref[i - 1] + x;
    }

    while (q--) {
        int l, r;
        cin >> l >> r;

        long long sandwiches = pref[r] - pref[l - 1];
        cout << sandwiches * 10 << endl;
    }
    
    return 0;
}