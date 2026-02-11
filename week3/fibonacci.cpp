#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int fab1 = 0, fab2 = 1;
    int count = 0;

    if (fab1 <= n) count++;
    if (fab2 <= n) count++;

    while (true) {
        int fab = fab1 + fab2;

        if (fab > n) break;

        fab1 = fab2;
        fab2 = fab;
        count++;
    }

    cout << count << endl;
    return 0;
}

/*
Fib(1)=0
Fib(2)=1
Fib(n)= Fib(n−1) + Fib(n−2).
*/