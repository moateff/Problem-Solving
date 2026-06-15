#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);

    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;

    int maxA = *max_element(a.begin(), a.end());
    int maxB = *max_element(b.begin(), b.end());

    // Lamoro starts first
    if (maxA >= maxB)
        cout << "LAMORO" << endl;
    else
        cout << "Ouda" << endl;

    return 0;
}
