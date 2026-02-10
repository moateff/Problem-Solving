#include <iostream>
using namespace std;

bool isDivisible(int a, int b) {
    if (a % b == 0)
        return true;
    else
        return false;
}

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= m; i++) {
        if (isDivisible(n, i)) {
            cout << i << " is a divisor of " << n << endl;
        }
    }

    return 0;
}