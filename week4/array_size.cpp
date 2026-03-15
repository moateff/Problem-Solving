#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x;
    cin >> x;

    long long n = (sqrt(1 + 8.0 * x) - 1) / 2;

    cout << n << endl;

    return 0;
}
