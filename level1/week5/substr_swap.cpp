#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    string s, t;
    cin >> s >> t;

    vector<int> flip(n + 2, 0); // difference array for flips

    while (m--) {
        int l, r;
        cin >> l >> r;

        l--; 
        r--;
        
        flip[l] ^= 1;
        flip[r + 1] ^= 1;
    }

    // Compute prefix XOR to get actual flips at each position
    for (int i = 1; i < n; i++) {
        flip[i] ^= flip[i - 1];
    }
    
    // Apply flips to build final S
    string res = s;
    for (int i = 0; i < n; i++) {
        if (flip[i]) {
            res[i] = t[i];
        }
    }

    cout << res << endl;

    return 0;
}