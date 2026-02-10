#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum[3] = {0};

    for (int i = 0; i < n; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        
        sum[0] += x;
        sum[1] += y;
        sum[2] += z;
    }

    if (sum[0] == 0 && sum[1] == 0 && sum[2] == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}