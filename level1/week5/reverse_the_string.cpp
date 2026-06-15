#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    string s;
    cin >> s;

    vector<int> pref(n + 1, 0);

    while (q--) {
        int x;
        cin >> x;

        int l = min(x, n - x + 1);
        int r = max(x, n - x + 1);

        l--;
        r--;

        pref[l]++;
        if (r - 1 < n)
            pref[r]--;
    }

    for (int i = 1; i < n; i++) {
        pref[i] += pref[i - 1];
    }

    for (int i = 0; i < n / 2; i++) {
        if (pref[i] % 2 != 0) {
            swap(s[i], s[n - i - 1]);
        }
    }

    cout << s << endl;

    return 0;
}