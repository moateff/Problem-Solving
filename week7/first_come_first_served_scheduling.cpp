#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;

    queue<string> qu;

    while (q--) {
        string op;
        cin >> op;

        if (op == "arrive") {
            string s;
            cin >> s;
            qu.push(s);
        } else if (op == "execute") { 
            if (!qu.empty()) {
                cout << qu.front() << endl;
                qu.pop();
            } else {
                cout << "idle" << endl;
            }
        }
    }

    return 0;
}