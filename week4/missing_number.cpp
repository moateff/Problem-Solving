#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n, 0);

    for (int i = 0; i < n - 1; i++) {
        int x;
        cin >> x;
        v[x - 1] = 1;
    }

    for (int i = 0; i < n; i++) {
        if (v[i] == 0) {
            cout << i + 1 << endl;
            break;
        }
    }

    return 0;
}
    