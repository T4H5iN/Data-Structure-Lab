// Data Structure LAB on 2/19/2024.
// Created by mdti0 on 3/8/2024.
// 2D Array Multiplication

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, p, i, j, k;

    cout << "Enter value of m: ";
    cin >> m;
    cout << "Enter value of n: ";
    cin >> n;
    int A[m][n];
    cout << "Enter value of p: ";
    cin >> p;
    int B[n][p];
    int multi[m][p];

    cout << "\nEnter values for matrix A:\n";
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    cout << "\nEnter values for matrix B:\n";
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            cin >> B[i][j];
        }
    }

    cout << "\nMultiplication of two matrices:" << endl;
    for (i = 0; i < m; i++) {
        for (j = 0; j < p; j++) {
            multi[i][j] = 0;
            for (k = 0; k < n; k++) {
                multi[i][j] += A[i][k] * B[k][j];
            }
            cout << multi[i][j] << "\t";
            if (j == p - 1) {
                cout << endl;
            }
        }
    }

    return 0;
}