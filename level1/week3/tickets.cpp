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
    
    int k;
    cin >> k;

    for (int i = 0; i < N; i++) {
        if (v[i] == k) {
            cout << "YES" << endl;
            return 0;
        }
    }
    
    cout << "NO" << endl;
    return 0;
}