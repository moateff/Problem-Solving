#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;

    stack<string> st;

    while (q--) {
        string op;
        cin >> op;

        if (op == "wash") {
            string color;
            cin >> color;
            st.push(color);
        } else if (op == "wear") { 
            if (!st.empty()) {
                cout << st.top() << endl;
                st.pop();
            } else {
                cout << "wash some clothes" << endl;
            }
        }
    }

    return 0;
}