#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    float N;
    
    cin >> N;

    int intPart = static_cast<int>(N);
    double fracPart = N - intPart;

    if (fabs(fracPart) < 1e-9) { 
        cout << "int " << intPart << endl;
    } else {
        cout << "float " << intPart << " " << fixed << setprecision(3) << fracPart << endl;
    }

    return 0;
}