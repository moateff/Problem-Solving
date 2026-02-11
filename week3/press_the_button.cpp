#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int q;
        cin >> q;

        vector<int> a(10);
        for (int i = 0; i < 10; i++) cin >> a[i];

        int x = 0; 
        for (int i = 0; i < q; i++) {
            x = a[x]; 
        }

        cout << x << endl;
    }
    
    return 0;
}