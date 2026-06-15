#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    const int MAXV = 100000;
    vector<int> freq(MAXV + 1, 0);

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x] = 1;
    }

    vector<int> pref(MAXV + 1, 0);
    for (int i = 1; i <= MAXV; i++) {
        pref[i] = pref[i - 1] + freq[i];
    }

    while (q--) {
        int l, r;
        cin >> l >> r;

        if (l > r) swap(l, r);
        
        int count = pref[r] - pref[l - 1];

        if (count == (r - l + 1)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
} 
