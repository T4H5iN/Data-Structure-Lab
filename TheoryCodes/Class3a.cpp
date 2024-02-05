// Data Structure Theory on 1/29/2024.
// Created by mdti0 on 2/5/2024.
// Insert

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, i, q, k;
    cout << "What do you want to do?\n";
    cout << "\t1. Insert at the beginning\n";
    cout << "\t2. Insert at the middle\n";
    cout << "\t3. Insert at the end\n";
    cin >> q;
    cout << "Enter array size: ";
    cin >> n;

    int a[n];
    cout << "Enter " << n << " numbers: ";
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Enter the number you want to insert: ";
    cin >> k;
    n++;
    if (q == 1) {
        for (i = n - 1; i >= 0; i--) {
            a[i + 1] = a[i];
        }
        a[0] = k;
        for (i = 0; i < n; i++) {
            cout << " " << a[i];
        }
    }

    if (q == 2) {
        int pos;
        cout << "Enter the position you want to insert the number: ";
        cin >> pos;
        for (i = n - 1; i >= pos; i--) {
            a[i + 1] = a[i];
        }
        a[pos] = k;
        for (i = 0; i < n; i++) {
            cout << " " << a[i];
        }
    }

    if (q == 3) {
        a[n - 1] = k;
        for (i = 0; i < n; i++) {
            cout << " " << a[i];
        }
    }

    return 0;
}
