#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int count = 1;

    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1] && count < 9) {
            count++;
        } else {
            cout << count << s[i - 1];
            count = 1;
        }
    }

    // print last group
    cout << count << s[n - 1] << endl;

    return 0;
}
