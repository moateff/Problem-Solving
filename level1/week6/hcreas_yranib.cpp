#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;

    int result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (target < arr[mid]) {
            low = mid + 1;
        } else if (target > arr[mid]) {
            high = mid - 1;
        } else {
            result = mid + 1;
            high = mid - 1;
        }
    }

    return result;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        while (q--) {
            int x;
            cin >> x;

            cout << binary_search(a, x) << endl;
        }
    }

    return 0;
}