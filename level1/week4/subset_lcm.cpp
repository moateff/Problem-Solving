#include <bits/stdc++.h>
using namespace std;

// Greatest Common Divisor
long long gcd(long long a, long long b)
{
    return b ? gcd(b, a % b) : abs(a);
}

// Least Common Multiple
long long lcm(long long a, long long b)
{
    if (a == 0 || b == 0)
        return 0;
    return (a / gcd(a, b)) * b;
}

int main() {
    int n;
    long long l;
    cin >> n >> l;

    vector<long long> a(n);
    for (auto &x : a)
        cin >> x;

    int ans = -1;
    long long lcm_ = 1;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        long long local_lcm = lcm(lcm_, a[i]);

        if (l % local_lcm == 0)
        {
            count++;
            lcm_ = local_lcm;
        }

        if (lcm_ == l)
            ans = max(ans, count);
    }

    cout << ans << endl;

    return 0;
}