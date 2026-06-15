#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        long long g = gcd(a, b);
        long long lcm = (a / g) * b;   // safe order to avoid overflow

        cout << lcm << '\n';
    }

    return 0;
}

/*
int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        long long atemp = 0, btemp = 0;

        do {
            if (atemp > btemp) {
                btemp += b;
            } else  {
                atemp += a;
            }
        } while (atemp != btemp);

        cout << atemp << endl;
    }
    return 0;
}
*/