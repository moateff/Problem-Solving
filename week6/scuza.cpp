#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<long long> pref(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            pref[i] = pref[i - 1] + a[i - 1];
        }

        vector<long long> pref_max(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            pref_max[i] = max(pref_max[i - 1], a[i - 1]);
        }

        vector<int> k(q);
        for (int i = 0; i < q; i++) {
            cin >> k[i];
        }

        for (int i = 0; i < q; i++) {     
            int index = upper_bound(pref_max.begin(), pref_max.end(), k[i]) - pref_max.begin();

            cout << pref[index - 1] << ' ';
        }
        cout << endl;
    }

    return 0;
}
