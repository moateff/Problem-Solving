#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, x;
    cin >> n >> x;

    long long k = (n + x - 1) / x; // ceil(n/x)

    long long steps = k + (k * x - n);

    cout << steps;

    return 0;
}