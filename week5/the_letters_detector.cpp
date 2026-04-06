#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<int> freq(256, 0);

    for (char c : s)
        freq[c]++;

    int best = 0;
    char ans = 0;

    for (int i = 0; i < 256; i++) {
        if (freq[i] > best) {
            best = freq[i];
            ans = (char)i;
        }
    }
    cout << ans << endl;

    return 0;
}