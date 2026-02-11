#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> a(N);
    for (int i = 0; i < N; i++)
        cin >> a[i];

    int minIndex = 0, maxIndex = 0;

    for (int i = 1; i < N; i++) {
        if (a[i] < a[minIndex])
            minIndex = i;
        if (a[i] > a[maxIndex])
            maxIndex = i;
    }

    // swap minimum and maximum
    swap(a[minIndex], a[maxIndex]);

    for (int i = 0; i < N; i++)
        cout << a[i] << " ";

    return 0;
}
