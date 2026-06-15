#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    if (s.find("Ouda") != string::npos) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}