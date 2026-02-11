#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> d(n - 1);
    for (int i = 0; i < n - 1; i++)
        cin >> d[i];

    vector<int> line(n, 0);

    // Jimmy
    line[0] = 1;

    // persons 2 .. n
    for (int i = 0; i < n - 1; i++) {
        int pos = d[i] + 1;   // 0-based index
        line[pos] = i + 2;   // person number
    }

    for (int i = 0; i < n; i++)
        cout << line[i] << " ";
    cout << endl;
    
    return 0;
}
