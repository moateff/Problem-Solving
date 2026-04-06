#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    string s;
    cin >> s;

    // prefix[i][c]: frequency of char c up to index i
    vector<vector<int>> prefix(n + 1, vector<int>(26, 0));

    for (int i = 1; i <= n; i++) {
        prefix[i] = prefix[i - 1];
        prefix[i][s[i - 1] - 'a']++;
    }

    while (m--) {
        int l, r;
        cin >> l >> r;

        int bestFreq = 0;
        char answer = 'a';

        for (int c = 0; c < 26; c++) {
            int freq = prefix[r][c] - prefix[l - 1][c];

            if (freq > bestFreq) {
                bestFreq = freq;
                answer = char('a' + c);
            }
        }

        cout << answer << endl;
    }

    return 0;
}