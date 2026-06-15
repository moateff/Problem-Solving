#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;

    vector<int> stairs(n);
    for (int i = 0; i < n; ++i) cin >> stairs[i];

    int prev = stairs[0];  // first stair
    bool survives = true;

    for (int i = 1; i < n; ++i) {
        int diff = prev - stairs[i];
        if (diff > x) {
            survives = false;
            break;
        }
        prev = stairs[i];
    }

    // check last step to the ground
    if (survives && stairs[n-1] > x) survives = false;

    cout << (survives ? "YES" : "NO") << endl;

    return 0;
}
