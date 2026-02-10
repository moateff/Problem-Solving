#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long int result = 1;

    for(int i = 0; i < n; i++) {
        long long int ai;
        cin >> ai;

        result *= ai;
    }

    cout << result << endl;
    return 0;
}