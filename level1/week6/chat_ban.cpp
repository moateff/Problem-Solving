#include <bits/stdc++.h>
using namespace std;

long long calc_emotes(long long k, long long n) {
    if (n <= k) {
        return (n * (n + 1)) / 2;
    } else {
        long long total = k * k;
        long long rem = 2 * k - 1 - n;
        return total - (rem * (rem + 1)) / 2;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long k, x;
        cin >> k >> x;
        
        long long low = 1;
        long long high = 2 * k - 1;

        while (low < high) {
            long long mid = low + (high - low) / 2;

            if (calc_emotes(k, mid) < x) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }
        
        cout << low << endl;
    }
    return 0;
}