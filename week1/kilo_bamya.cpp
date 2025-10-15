#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                cout << "Tie" << endl; // 0 0 0 
            } else {
                cout << "Farid" << endl; // 0 0 1
            }
        } else {
            if (c == 0) {
                cout << "Gom3a" << endl; // 0 1 0
            } else {
                cout << "Ouda" << endl; // 0 1 1
            }
        }
    } else {
        if (b == 0) {
            if (c == 0) {
                cout << "Ouda" << endl; // 1 0 0
            } else {
                cout << "Gom3a" << endl; // 1 0 1
            }
        } else {
            if (c == 0) {
                cout << "Farid" << endl; // 1 1 0
            } else {
                cout << "Tie" << endl; // 1 1 1
            }
        }
    }
    
    return 0;
}