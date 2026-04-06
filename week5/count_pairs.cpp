#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        // Frequency array from [-n ... n]
        int offset = n;
        vector<long long> freq(2 * n + 1, 0);

        for (int i = 0; i < n; i++) {
            cin >> a[i];

            freq[a[i] + offset]++;
        }
        
        long long ans = 0;

        // Case 1: sum = 0 → (x, -x)
        for (int x = 1; x <= n; x++) {
            long long f1 = freq[x + offset];
            long long f2 = freq[-x + offset];
            ans += f1 * f2;
        }

        // Special case: (0,0)
        long long zero = freq[offset];
        ans += zero * (zero - 1) / 2;

        // Case 2: sum = 1 → (x, 1-x)
        for (int x = -n; x <= n; x++) {
            int y = 1 - x;

            if (y < -n || y > n) continue;

            // avoid double counting
            if (x < y) {
                ans += freq[x + offset] * freq[y + offset];
            }
        }

        cout << ans << "\n";
    }
    return 0;
}