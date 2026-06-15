#include <iostream>
using namespace std;

bool isLucky(int n) {
    while (n > 0) {
        int d = n % 10;
        if (d != 4 && d != 7)
            return false;
        n /= 10;
    }
    return true;
}

int main() {
    int N, M;
    cin >> N >> M;

    bool found = false;

    for (int i = N; i <= M; i++) {
        if (isLucky(i)) {
            cout << i << " ";
            found = true;
        }
    }

    if (!found)
        cout << -1;

    return 0;
}
