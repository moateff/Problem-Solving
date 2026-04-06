#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> b(m);
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    int count = 0;
    int i = 0;
    int j = 0;

    while (true) {
        if (i == n || j == m) break;

        while(i + 1 < n && a[i] == a[i + 1]) i++;

        auto it1 = lower_bound(b.begin(), b.end(), a[i]);
        while (i < n && it1 != b.end() && (*it1 == a[i])) {
            i++;
            
            if (i == n) break;
            it1 = lower_bound(b.begin(), b.end(), a[i]);
        }
        
        if (i == n) break;
        
        while(j + 1 < m && b[j] == b[j + 1]) j++;

        auto it2 = lower_bound(a.begin(), a.end(), b[j]);
        while (j < m && it2 != a.end() && (*it2 == b[j])) {
            j++;
            
            if (j == m) break; 
            it2 = lower_bound(a.begin(), a.end(), b[j]);
        }
        
        if (j == m) break;

        count++;
        i++;
        j++;
    }

    cout << count << endl;
    return 0;
}