#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int i;
    long long ll;
    char c;
    float f;
    double d;

    cin >> i >> ll >> c >> f >> d;
    cout << i << endl;
    cout << ll << endl;
    cout << c << endl;
    cout << fixed << setprecision(2) << f << endl;
    cout << fixed << setprecision(2) << d << endl;

    return 0;
}
