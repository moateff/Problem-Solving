#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    const int MAXV = 100000;
    vector<int> freq(MAXV + 1, 0);

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }

    while (q--) {
        int x;
        cin >> x;
        cout << freq[x] << endl;
    }

    return 0;
}