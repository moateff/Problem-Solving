#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long a, ans = 0;

    for (long long i = 1; i <= n; i++) {
        cin >> a;
        ans += a * i * (n - i + 1);
    }

    cout << ans << endl;

    return 0;
}

/*
array:
[1, 2, 3, 4]

subarrays:
[1] = 1
[2] = 2
[3] = 3
[4] = 4
[1, 2] = 3
[2, 3] = 6
[3, 4] = 10
[1, 2, 3] = 9
[2, 3, 4] = 12
[1, 2, 3, 4] = 16

element contribution
1: 4 = 1 * 4
2: 6 = 2 * 3
3: 6 = 3 * 2
4: 4 = 4 * 1

equation:
ans += a * i * (n - i + 1)
*/