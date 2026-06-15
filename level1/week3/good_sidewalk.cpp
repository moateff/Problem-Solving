#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string s;
        cin >> s;

        bool good = true;

        for (int i = 1; i < (int)s.size(); i++) {
            if (s[i] == s[i - 1]) {
                good = false;
                break;
            }
        }

        if (good)
            cout << "Good\n";
        else
            cout << "Bad\n";
    }

    return 0;
}
