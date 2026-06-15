#include <iostream>
#include <climits>
using namespace std;

int main() {
    int N;
    cin >> N;

    int maxEven = INT_MIN;
    int minOdd = INT_MAX;

    bool foundEven = false;
    bool foundOdd = false;

    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;

        if (x % 2 == 0) {
            foundEven = true;
            if (x > maxEven)
                maxEven = x;
        } else {
            foundOdd = true;
            if (x < minOdd)
                minOdd = x;
        }
    }

    if (foundEven)
        cout << maxEven << " ";
    else
        cout << "No even ";

    if (foundOdd)
        cout << minOdd << endl;
    else
        cout << "No odd" << endl;

    return 0;
}
