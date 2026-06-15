#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<pair<int, int>> movies(n);

    for (int i = 0; i < n; i++) {
        int start, end;
        cin >> start >> end;
        movies[i] = {end, start};
    }

    sort(movies.begin(), movies.end());

    int count = 0;
    int lastEnd = 0;

    for (auto &[end, start] : movies) {
        if (start >= lastEnd) {
            count++;
            lastEnd = end;
        }
    }

cout << count << endl;
    
    return 0;
}