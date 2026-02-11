#include <iostream>
#include <vector>
using namespace std;

int main() {
    string s;
    cin >> s;

    int count = 0;
    for (auto ch : s) {
        if (ch == 'a' || ch == 'A') count++;
    }

    cout << count << endl;
    return 0;
}