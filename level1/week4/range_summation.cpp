#include <iostream>
using namespace std;

long long sumAll(long long n) {
    return n * (n + 1) / 2;
}

long long sumEvenUpTo(long long n) {
    long long k = n / 2;
    return k * (k + 1);
}

int main() {
    long long l, r;
    cin >> l >> r;

    long long totalSum = sumAll(r) - sumAll(l - 1);
    long long evenSum  = sumEvenUpTo(r) - sumEvenUpTo(l - 1);
    long long oddSum   = totalSum - evenSum;

    cout << totalSum << " " << evenSum << " " << oddSum << endl;

    return 0;
}
