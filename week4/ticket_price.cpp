#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x, y, z;
    cin >> x >> y >> z;

    if (x > y) {
        cout << 0 << endl;
        return 0;
    }

    __int128 n = ( (__int128)(y - x) ) / z + 1;

    __int128 sum = n * (2 * (__int128)x + (n - 1) * z) / 2;

    long long answer = (long long)sum;
    cout << answer << endl;
}