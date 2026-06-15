#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long x;
    cin >> n >> x;

    unordered_map<long long, int> pos;

    for (int i = 1; i <= n; i++) {
        long long a;
        cin >> a;

        long long need = x - a;

        if (pos.count(need)) {
            cout << pos[need] << ' ' << i << endl;
            return 0;
        }

        pos[a] = i;
    }

    cout << -1 << endl;
    return 0;
}