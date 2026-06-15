#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<double> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    double low = 0;
    double high = *max_element(a.begin(), a.end());
    
    for (int iter = 0; iter < 100; iter++) {
        double mid = low + (high - low) / 2.0;
        
        int pieces = 0;
        for (int i = 0; i < n; i++) {
            pieces += (int)(a[i] / mid);
        }

        if (pieces >= k) {
            low = mid;
        } else {
            high = mid;
        }
    }

    cout << fixed << setprecision(10) << low << endl;

    return 0;
}