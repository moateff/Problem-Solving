#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> h(n);
        for (int i = 0; i < n; i++) {
            cin >> h[i];
        }

        int l = 0, r = n - 1;
        int l_max = 0, r_max = 0;
        long long ans = 0;

        while (l < r) {
            if (h[l] < h[r]) {
                l_max = max(l_max, h[l]);
                ans += l_max - h[l];
                l++;
            } else {
                r_max = max(r_max, h[r]);
                ans += r_max - h[r];
                r--;
            }
        }

        cout << ans << endl;
    }
    
    return 0;
}