#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<bool> seen(100001, false);
    int count = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (!seen[x]) {
            cout << ++count << ' ';
            seen[x] = true;
        } else {
            cout << count << ' ';
        }
    }
    cout << endl;

    return 0;
}