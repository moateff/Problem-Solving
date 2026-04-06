#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long t;
    cin >> n >> t;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<long long> pref(n + 1, 0);
    for (int i = 1; i <= n; i++)
        pref[i] = pref[i - 1] + a[i - 1];

    int maxBooks = 0;

    for (int i = 1; i <= n; i++) {
        long long target = t + pref[i - 1];

        int j = upper_bound(pref.begin(), pref.end(), target) - pref.begin() - 1;

        maxBooks = max(maxBooks, j - i + 1);
    }

    cout << maxBooks << endl;
    
    return 0;
}