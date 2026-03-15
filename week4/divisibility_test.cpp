#include <bits/stdc++.h>
using namespace std;

int main() {
    string N;
    long long X;

    cin >> N >> X;

    long long rem = 0;

    for (char c : N) {
        rem = (rem * 10 + (c - '0')) % X;
    }

    if (rem == 0)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}