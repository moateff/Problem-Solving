#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> v(N);
    for (int i = 0; i < N; i++) {
        cin >> v[i];
    }
    
    for (int i = 0; i < (N + 1) / 2; i++) {
        if (v[i] != v[N - i - 1]) {
            cout << "NO" << endl;
            return 0;
        }
    }
    
    cout << "YES" << endl;
    return 0;
}