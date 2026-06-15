#include <iostream>
using namespace std;

int main() {
    long long x, z;
    cin >> x;

    while (cin >> z) {
        if (x >= z) {
            cout << "Win" << endl;
        } else {
            cout << "Lose" << endl;
            break;
        }
    }

    return 0;
}