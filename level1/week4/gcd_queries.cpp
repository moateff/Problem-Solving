#include <bits/stdc++.h>
using namespace std;

static const long long MOD = 1000000007LL;

int main() {
    int n, q;
    cin >> n >> q;

    long long g;
    cin >> g;

    // Compute gcd of the whole array
    for (int i = 1; i < n; i++) {
        long long x;
        cin >> x;
        g = gcd(g, x);
    }

    long long current = g % MOD;

    // Read queries and print answers
    for (int i = 0; i < q; i++) {
        long long x;
        cin >> x;

        current = (current * (x % MOD)) % MOD;
        cout << current << '\n';
    }

    return 0;
}
