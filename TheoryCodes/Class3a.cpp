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
    int a[n + 1];
    cout << "Enter " << n << " numbers: ";
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Enter the number you want to insert: ";
    cin >> k;

    if (q == 1) {
        for (i = n; i > 0; i--) {
            a[i] = a[i - 1];
        }
        a[0] = k;
    }

    if (q == 2) {
        int pos;
        cout << "Enter the position you want to insert the number: ";
        cin >> pos;
        for (i = n; i > pos; i--) {
            a[i] = a[i - 1];
        }
        a[pos] = k;
    }

    if (q == 3) {
        a[n] = k;
    }
    
    for (i = 0; i <= n; i++) {
        cout << " " << a[i];
    }
    
    return 0;
}
