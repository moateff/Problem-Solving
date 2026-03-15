#include <bits/stdc++.h>
using namespace std;

int main() {
    int rowA, colA;
    cin >> rowA >> colA;

    vector<vector<int>> A(rowA, vector<int>(colA));
    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colA; j++) {
            cin >> A[i][j];
        }
    }

    int rowB, colB;
    cin >> rowB >> colB;

    vector<vector<int>> B(rowB, vector<int>(colB));
    for (int i = 0; i < rowB; i++) {
        for (int j = 0; j < colB; j++) {
            cin >> B[i][j];
        }
    }

    int rowC = rowA, colC = colB;
    vector<vector<int>> C(rowC, vector<int>(colC, 0));
    
    for (int i = 0; i < rowC; i++) {
        for (int j = 0; j < colC; j++) {
            for (int k = 0; k < colA; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    for (int i = 0; i < rowA; i++) {
        for (int j = 0; j < colC; j++) {
            cout << C[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}