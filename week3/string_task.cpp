#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s1;
    string s2;

    cin >> s1 >> s2;

    // Sort both strings
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    
    // Compare lexicographically
    if (s1 < s2) {
        cout << s1 << endl;
    } else {
        cout << s2 << endl;
    }

    return 0;
}