#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    long long result = 1;
    for (int i = 0; i < y; i++) {
        result = result * x;
    }

    cout << result << endl;

    return 0;
}