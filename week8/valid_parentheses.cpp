#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<char, char> openToClose, closeToOpen;

    for (int i = 0; i < n; i++) {
        string p;
        cin >> p;
        openToClose[p[0]] = p[1];
        closeToOpen[p[1]] = p[0];
    }

    string s;
    cin >> s;

    stack<char> st;

    for (char c : s) {
        // if it's an opening bracket
        if (openToClose.count(c)) {
            st.push(c);
        }

        // if it's a closing bracket
        else if (closeToOpen.count(c)) {
            if (st.empty() || st.top() != closeToOpen[c]) {
                cout << "NO" << endl;
                return 0;
            }
            st.pop();
        }

        // invalid character (shouldn't happen per constraints)
        else {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << (st.empty() ? "YES" : "NO") << endl;

    return 0;
}