#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_set<string> seen;
    string name;

    for (int i = 0; i < n; i++) {
        cin >> name;

        if (seen.count(name)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
            seen.insert(name);
        }
    }
    
    return 0;
}