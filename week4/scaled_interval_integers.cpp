#include <bits/stdc++.h>
using namespace std;

using i128 = __int128_t;

i128 floor_div(i128 p, i128 q) { // q > 0
    if (p >= 0) return p / q;
    return - ((-p + q - 1) / q);
}

i128 ceil_div(i128 p, i128 q) { // q > 0
    if (p >= 0) return (p + q - 1) / q;
    return - ((-p) / q);
}

int main() {
    long long a, b;
    cin >> a >> b;

    i128 A = a, B = b;

    i128 left  = ceil_div(5 * A, 3);
    i128 right = floor_div(7 * B, 4);

    i128 ans = right - left + 1;
    if (ans < 0) ans = 0;

    long long out = (long long)ans;
    cout << out << endl;

    return 0;
}