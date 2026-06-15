#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, t;
    cin >> n >> t;

    vector<long long> k(n);
    for (int i = 0; i < n; i++) {
        cin >> k[i];
    }

    long long low = 0;
    long long high = (*min_element(k.begin(), k.end())) * t;

    while (low < high) {
        long long mid = low + (high - low) / 2;

        long long products = 0;
        for (int i = 0; i < n; i++) {
            products += mid / k[i];
            if (products >= t) break; // early stop
        }

        if (products >= t) {
            high = mid;     
        } else {
            low = mid + 1;
        }
    }

    cout << low << endl;
    return 0;
}