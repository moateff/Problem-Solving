#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int freq[26] = {0};
    for (int i = 0; i < n; i++) {
        char c;
        cin >> c;
        freq[c - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        while (freq[i]--) {
            cout << char('a' + i);
        }
    }
    cout << endl;

    return 0;
}