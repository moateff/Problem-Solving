#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;

    // Sort first (IMPORTANT)
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    // Remove duplicates from A
    vector<int> unique_a;
    for (int x : a) {
        auto it = lower_bound(unique_a.begin(), unique_a.end(), x);
        if (it == unique_a.end() || *it != x)
            unique_a.insert(it, x);
    }

    // Remove duplicates from B
    vector<int> unique_b;
    for (int x : b) {
        auto it = lower_bound(unique_b.begin(), unique_b.end(), x);
        if (it == unique_b.end() || *it != x)
            unique_b.insert(it, x);
    }

    // Filter A (elements not in B)
    vector<int> filtered_a;
    for (int x : unique_a) {
        auto it = lower_bound(unique_b.begin(), unique_b.end(), x);
        if (it == unique_b.end() || *it != x)
            filtered_a.push_back(x);
    }

    // Filter B (elements not in A)
    vector<int> filtered_b;
    for (int x : unique_b) {
        auto it = lower_bound(unique_a.begin(), unique_a.end(), x);
        if (it == unique_a.end() || *it != x)
            filtered_b.push_back(x); 
    }

    cout << min(filtered_a.size(), filtered_b.size()) << endl;

    return 0;
}