#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    long long sum = 0, ans = 0;
    unordered_map<long long, int> freq;

    freq[0] = 1;

    for (int i = 0; i < n; i++) {
        sum += a[i];

        if (freq.count(sum - x))
            ans += freq[sum - x];

        freq[sum]++;
    }

    cout << ans << endl;
    return 0;
}