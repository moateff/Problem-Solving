#include <bits/stdc++.h>
using namespace std;

int upper_bound(vector<int>& arr, int target) {
    int result = -1;

    int low = 0;
    int high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (target < arr[mid]) {
            result = mid + 1;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return result;
}

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    while (q--) {
        int x;
        cin >> x;

        cout << upper_bound(a, x) << endl;
    }

    return 0;
}