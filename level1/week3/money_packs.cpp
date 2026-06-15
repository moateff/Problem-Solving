#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    int maxSum = 0;

    for (int i = 0; i < N; i++) {
        int sum = 0;
        for (int j = 0; j < M; j++) {
            int money;
            cin >> money;
            sum += money;
        }
        maxSum = max(maxSum, sum);
    }

    cout << maxSum;

    return 0;
}
