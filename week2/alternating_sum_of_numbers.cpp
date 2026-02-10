#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;

        long long int result = 0;

        for(int i = 0; i < n; i++) {
            int ai;
            cin >> ai;

            result = (i % 2) ? result - ai : result + ai;
        }

        cout << result << endl;
    }

    return 0;
}