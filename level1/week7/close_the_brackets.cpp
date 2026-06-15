#include <bits/stdc++.h>
using namespace std;

char get_close(char c) {
    if (c == '(') return ')';
    if (c == '{') return '}';
    return ']';
}

bool match(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']');
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        stack<char> st;
        bool ok = true;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                st.push(s[i]);
            }
            else if (s[i] == '?' ) {
                if (st.empty()) {
                    ok = false;
                    break;
                }
                char open = st.top();
                st.pop();
                s[i] = get_close(open);
            }
            else {
                if (st.empty() || !match(st.top(), s[i])) {
                    ok = false;
                    break;
                }
                st.pop();
            }
        }

        if (!st.empty()) ok = false;

        if (ok) 
            cout << s << endl;
        else 
            cout << "impossible" << endl;
    }

    return 0;
}