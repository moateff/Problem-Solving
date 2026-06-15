#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    // Difference array to count frequency of each index
    vector<long long> diff(n + 1, 0);

    while (q--) {
        int l, r;
        cin >> l >> r;

        l--;
        r--;

        diff[l]++;
        if (r + 1 < n)
            diff[r + 1]--;
    }

    // Build frequency array
    vector<long long> freq(n);
    freq[0] = diff[0];
    for (int i = 1; i < n; i++) {
        freq[i] = freq[i - 1] + diff[i];
    }
    
    // Sort both arrays
    sort(a.begin(), a.end());
    sort(freq.begin(), freq.end());

    // Compute maximum sum
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        ans += a[i] * freq[i];
    }

    cout << ans << endl;
    return 0;
}