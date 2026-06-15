#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    // From the sequence:
    // 1, 2, 2, 0, 4, 8, 8, 0, 16, 32, 32, 0, ...
    // Zeros appear at indices: 4, 8, 12, 16, ...
    // i.e. every 4th position starting from 4.
    // So the number of zeros from 1 to n is simply n / 4.

    cout << n / 4;
    return 0;
}
