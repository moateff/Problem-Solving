#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long x, y;
        long long minX = LLONG_MAX, maxX = LLONG_MIN;
        long long minY = LLONG_MAX, maxY = LLONG_MIN;

        for (int i = 0; i < n; i++) {
            cin >> x >> y;
            minX = min(minX, x);
            maxX = max(maxX, x);
            minY = min(minY, y);
            maxY = max(maxY, y);
        }

        long long width  = (maxX - minX) + 2;
        long long height = (maxY - minY) + 2;

        cout << width * height << endl;
    }

    return 0;
}