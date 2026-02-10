#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int n2 = n * n;

    int count = 0;
    for (int a = 1; a < n; a++) {
        int b2 = n2 - a * a;
        int b = (int) sqrt(b2);

        if (b >= a && b * b == b2) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}