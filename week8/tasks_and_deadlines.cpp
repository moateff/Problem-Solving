#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int,int>> tasks(n);
    long long sum_d = 0;

    for (int i = 0; i < n; i++) {
        cin >> tasks[i].first >> tasks[i].second;
        sum_d += tasks[i].second;
    }

    sort(tasks.begin(), tasks.end()); 

    long long time = 0, sum_f = 0;

    for (auto &t : tasks) {
        time += t.first;
        sum_f += time;
    }

    cout << sum_d - sum_f << endl;
}