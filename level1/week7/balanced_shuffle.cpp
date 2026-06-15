#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int balance = 0;
    vector<pair<int, int>> v;

    for (int i = 0; i < s.size(); i++) {
        v.push_back({balance, i});

        if (s[i] == '(') balance++;
        else balance--;
    }

    sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) {
        if (a.first < b.first) return true;
        else if (a.first == b.first && a.second > b.second) return true;
        else return false;
    });

    for (int i = 0; i < s.size(); i++) {
        cout << s[v[i].second];
    }
    cout << endl;
    
    return 0;
}