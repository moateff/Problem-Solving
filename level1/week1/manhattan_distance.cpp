#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    long long x1, y1, x2, y2;

    cin >> x1 >> y1;
    cin >> x2 >> y2;

    long long distance = abs(x1 - x2) + abs(y1 - y2);
    
    cout << distance << endl;

    return 0;
}
