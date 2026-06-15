#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long count[4] = {0}; // one based index

    for (int i = 0; i < n; i++) {
        int c;
        cin >> c;
        count[c]++;
    }

    long long result = 0;
    for (int i = 1; i <= 3; i++) {
        result += count[i] * (count[i] - 1) / 2;
    }

    cout << result << endl;

    return 0;
}