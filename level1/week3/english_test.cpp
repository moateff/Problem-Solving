#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (auto ch : s) {
        cout << ch << " ";
    }
    cout << endl;
    
    return 0;
}