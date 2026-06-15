#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int evenCount = 0;
    int oddCount = 0;
    int positiveCount = 0;
    int negativeCount = 0;

    for(int i = 0; i < N; i++) {
        int ai;
        cin >> ai;

        if (ai % 2) {
            oddCount++;
        } else {
            evenCount++;
        }

        if (ai > 0) {
            positiveCount++;
        } else if (ai < 0) {
            negativeCount++;
        }
    } 

    cout << "Even: " << evenCount << endl;
    cout << "Odd: " << oddCount << endl;
    cout << "Positive: " << positiveCount << endl;
    cout << "Negative: " << negativeCount << endl;

    return 0;
}