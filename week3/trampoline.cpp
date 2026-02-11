#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    long long pos = 1;
    int count = 0;

    while (pos <= n) {
        count++;
        pos = pos + a[pos];
    }

    cout << count << endl;
    return 0;
}