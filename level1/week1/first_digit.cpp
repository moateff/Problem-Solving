#include <iostream>
using namespace std;

int main() {
    int x;

    cin >> x;

    int first_digit = x / 1000;  // since x is a 4-digit number

    if (first_digit % 2 == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
