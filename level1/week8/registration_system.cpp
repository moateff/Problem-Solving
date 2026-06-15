#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<string, int> freq;
    string name;

    while (n--) {
        cin >> name;

        if (freq[name] == 0) {
            cout << "OK\n";
            freq[name] = 1;
        } else {
            string newName = name + to_string(freq[name]);
            cout << newName << endl;
            freq[name]++;
            freq[newName] = 1;
        }
    }

    return 0;
}