#include <iostream>
using namespace std;

int main() {
    char p1, p2;

    cin >> p1 >> p2;

    if (p1 == 'R') {
        if (p2 == 'R') {
            cout << "draw" << endl;
        } else if (p2 == 'P') {
            cout << "p2" << endl;
        } else if (p2 == 'S') {
            cout << "p1" << endl;
        }
    } else if (p1 == 'P') {
        if (p2 == 'R') {
            cout << "p1" << endl;
        } else if (p2 == 'P') {
            cout << "draw" << endl;
        } else if (p2 == 'S') {
            cout << "p2" << endl;
        }
    } else if (p1 == 'S') { 
        if (p2 == 'R') {
            cout << "p2" << endl;
        } else if (p2 == 'P') {
            cout << "p1" << endl;
        } else if (p2 == 'S') {
            cout << "draw" << endl;
        }
    }

    return 0;
}