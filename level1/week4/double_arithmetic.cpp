#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;

    while (q--) {
        long long t1, t2, t3, n;
        cin >> t1 >> t2 >> t3 >> n;

        long long d = t2 - t1;

        if (n % 2 == 0)
            cout << -d * (n / 2) << endl;
        else
            cout << t1 + d * (n / 2) << endl;
    }
    
    return 0;
}

/*
d = t2 - t1 = t3 - t2

the kth item:
ak = t1 + (k - 1) * d

ans = sum odd k (ak) - sum even k (ak)
    = a1 - a2 + a3 - a4 + a5 - a6 + ...
    = (a1 - a2) + (a3 - a4) + (a5 - a6) + ...

one pair:
a(2i - 1) - a(2i)
= t1 + (2i - 2) * d - t1 - (2i - 1) * d
= -d

count of pairs:
if n even
    n / 2
else 
    (n - 1) / 2

ans:
if n even
    -d * (n / 2)
else
    t1 + d * (n / 2)
*/