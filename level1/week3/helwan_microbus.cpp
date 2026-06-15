#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> a(N);
    for (int i = 0; i < N; i++)
        cin >> a[i];

    sort(a.begin(), a.end(), greater<int>());

    for (int i = 0; i < N; i++)
        cout << a[i] << " ";
    cout << endl;

    return 0;
}
