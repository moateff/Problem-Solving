#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    // make string 1-based
    s = " " + s;

    vector<int> prefA(n+1, 0), prefL(n+1, 0), prefI(n+1, 0);

    for (int i = 1; i <= n; i++) {
        prefA[i] = prefA[i-1] + (s[i] == 'a');
        prefL[i] = prefL[i-1] + (s[i] == 'l');
        prefI[i] = prefI[i-1] + (s[i] == 'i');
    }

    int q;
    cin >> q;

    while (q--) {
        int l, r;
        cin >> l >> r;

        int countA = prefA[r] - prefA[l-1];
        int countL = prefL[r] - prefL[l-1];
        int countI = prefI[r] - prefI[l-1];

        if (countA > 0 && countL > 0 && countI > 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}