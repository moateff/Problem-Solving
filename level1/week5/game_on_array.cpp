#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    long long sum = 0;
    for (int i = 0; i < n; i++) {
        long long a;
        cin >> a;
        sum += a;
    }

    for (int i = 0; i < k; i++) {
        long long l, r, x;
        cin >> l >> r >> x;

        if (l > r) swap(l, r);

        long long len = r - l + 1;

        if (i % 2 == 0) sum += len * x;   // Mahmoud
        else sum -= len * x;              // Elsayed
    }

    if (sum > 0) cout << "Mahmoud" << endl;
    else if (sum < 0) cout << "Elsayed" << endl;
    else cout << "Tie" << endl;

    return 0;
}