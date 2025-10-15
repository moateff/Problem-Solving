#include <iostream>
#include <iomanip>

#define PI 3.141592653

using namespace std;

int main() {
    double radius;

    cin >> radius;
    cout << fixed << setprecision(9) << PI * radius * radius << endl;

    return 0;
}
