#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;

    deque<int> dq;
    bool reversed = false;

    while (q--) {
        string op;
        cin >> op;

        if (op == "back") {
            if (dq.empty()) {
                cout << "No job for Ada?" << endl;
            } else {
                if (reversed) {
                    cout << dq.front() << endl;
                    dq.pop_front();
                } else {
                    cout << dq.back() << endl;
                    dq.pop_back();
                }
            }
        } else if (op == "front") {
            if (dq.empty()) {
                cout << "No job for Ada?" << endl;
            } else {
                if (reversed) {
                    cout << dq.back() << endl;
                    dq.pop_back();
                } else {
                    cout << dq.front() << endl;
                    dq.pop_front();
                }
            }
        } else if (op == "reverse") {
            reversed = !reversed;
        } else if (op == "push_back") {
            int x;
            cin >> x;

            if (!reversed) {
                dq.push_back(x);
            } else { 
                dq.push_front(x);
            }
        } else if (op == "toFront") {
            int x;
            cin >> x;

            if (!reversed) {
                dq.push_front(x);
            } else { 
                dq.push_back(x);
            }
        }
    }
    
    return 0;
}