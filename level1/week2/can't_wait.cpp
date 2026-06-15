#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;
    while (n > 0) {
        sum += n % 10;  // add last digit
        n /= 10;        // remove last digit
    }

    cout << sum << endl;
    return 0;
}
