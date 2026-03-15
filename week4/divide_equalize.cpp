#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;

    while (q--) {
        long long a, b;
        cin >> a >> b;

        long long g = gcd(a, b);

        cout << a / g << ' ' << b / g << endl;
    }
    
    return 0;
}