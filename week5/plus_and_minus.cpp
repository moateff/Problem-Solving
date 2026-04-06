#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        int n = s.size();

        int p;
        cin >> p;

        vector<pair<int, char>> ops(p + 1); // 1-based
        for (int i = 1; i <= p; i++) {
            int pos;
            char c;
            cin >> pos >> c;
            ops[i] = {pos - 1, c}; // convert to 0-based index
        }

        int q;
        cin >> q;

        vector<int> op_count(p + 2, 0); // difference array

        for (int i = 0; i < q; i++) {
            int x, y;
            cin >> x >> y;
            op_count[x] += 1;
            op_count[y + 1] -= 1;
        }

        // prefix sum to get number of times each operation is applied
        for (int i = 1; i <= p; i++) {
            op_count[i] += op_count[i - 1];
        }

        // apply operations
        for (int i = 1; i <= p; i++) {
            int times = op_count[i] % 26;
            int pos = ops[i].first;
            char op = ops[i].second;

            if (times == 0) continue;

            if (op == '+') {
                s[pos] = (s[pos] - 'a' + times) % 26 + 'a';
            } else { // op == '-'
                s[pos] = (s[pos] - 'a' - times + 26) % 26 + 'a';
            }
        }

        cout << s << "\n";
    }

    return 0;
}