#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    // s contains: digit, letter, digit, letter, ...

    for (int i = 0; i < 2 * n; i += 2) {
        int count = s[i] - '0';  
        char ch = s[i + 1];    

        for (int k = 0; k < count; k++) {
            cout << ch;
        }
    }

    cout << '\n';
    return 0;
}
