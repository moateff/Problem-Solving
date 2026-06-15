#include <iostream>
#include <string>
using namespace std;

int main() {
    string F1, S1, F2, S2;

    cin >> F1 >> S1;
    cin >> F2 >> S2;

    if (S1 == S2) {
        cout << "Siblings" << endl;
    } else {
        cout << "Not Siblings" << endl;
    }

    return 0;
}
