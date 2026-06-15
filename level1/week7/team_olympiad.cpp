#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> p, m, pe; // 1, 2, 3

    for (int i = 1; i <= n; i++) {
        int t;
        cin >> t;

        if (t == 1) p.push_back(i);
        else if (t == 2) m.push_back(i);
        else pe.push_back(i);
    }

    int w = min({p.size(), m.size(), pe.size()});

    cout << w << endl;

    for (int i = 0; i < w; i++) {
        cout << p[i] << " " << m[i] << " " << pe[i] << endl;
    }

    return 0;
}