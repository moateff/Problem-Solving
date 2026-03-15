#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;

    while (q--) {
        long long a, b, n;
        cin >> a >> b >> n;
        
        long long g = gcd(a, b);
        long long lcm = (a / g) * b;

        long long ans = (n / a) + (n / b) - (n / lcm);

        cout << ans << endl;
    }
    
    return 0;
}