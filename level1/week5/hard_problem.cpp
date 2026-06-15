#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long ans = 0;

    for (int i = 0; i < n; i++) {
        int offset = 100000;
        vector<int> freq (2 * offset + 1, 0);

        for (int j = i; j < n; j++) {
            if (freq[a[j] + offset] > 0)
                break;
            
            freq[a[j] + offset]++;
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
