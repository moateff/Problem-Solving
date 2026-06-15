#include <bits/stdc++.h>
using namespace std;

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;

    float ans = max(abs(x1 - x2), abs(y1 - y2));
    cout << ans << endl;
    return 0;
}