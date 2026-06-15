#include <iostream>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    for (char &c : s) {
        if (islower(c))
            c = toupper(c); // convert lowercase to uppercase
        else if (isupper(c))
            c = tolower(c); // convert uppercase to lowercase
        // non-alphabetic characters stay the same
    }

    cout << s;

    return 0;
}