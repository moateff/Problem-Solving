#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++) {
        int needed = x - a[i];

        if (mp.count(needed)) {
            cout << i + 1 << ' ' << mp[needed] + 1 << endl;
            return 0;
        }

        mp[a[i]] = i;
    }

    cout << -1 << endl;
    return 0;
}