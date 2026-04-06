#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int q;
    cin >> q;

    while (q--) {
        int l, r;
        cin >> l >> r;


        int right = upper_bound(a.begin(), a.end(), r) - a.begin();
        int left  = lower_bound(a.begin(), a.end(), l) - a.begin();

        cout << (right - left) << endl;
    }
    
    return 0;
}