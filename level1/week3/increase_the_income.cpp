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
        cout << v[i] + k << " ";
    }
    cout << endl;
    
    return 0;
}