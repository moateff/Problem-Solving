#include <iostream>
using namespace std;

int main() {
    int x, y;

    cin >> x >> y;

    if (y == x + 1 || (x == 1 && y == 10)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
