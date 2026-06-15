#include <bits/stdc++.h>
using namespace std;

int main() {
    long long l, r, d;
    cin >> l >> r >> d;

    unsigned long long ans = r / d - (l - 1) / d;
    cout << ans << endl;

    return 0;
}