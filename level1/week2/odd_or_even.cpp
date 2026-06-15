#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;

        if (n % 2) {
            cout << "ODD" << endl;
        } else {
            cout << "EVEN" << endl;
        }
    }

    return 0;
}