#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, q;
    cin >> n >> q;

    long double m;
    cin >> m;

    long long addSum = 0;
    for (int i = 0; i < q; i++) {
        long long x;
        cin >> x;
        addSum += x;
    }

    long double totalSum = (long double)n * m + addSum;
    long double newMean = totalSum / (long double)(n + q);

    cout << fixed << setprecision(17) << newMean << endl;

    return 0;
}