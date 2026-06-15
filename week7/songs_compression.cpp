#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    long long total = 0;

    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;

        total += v[i].first;
    }

    sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int>b) {
        return (a.first - a.second) > (b.first - b.second);
    });

    int count = 0;

    for (int i = 0; i < n; i++) {
        if (total <= m) break;

        total -= v[i].first;
        total += v[i].second;
        count++;
    }

    if (total > m) 
        cout << -1 << endl;
    else
        cout << count << endl;

    return 0;
}