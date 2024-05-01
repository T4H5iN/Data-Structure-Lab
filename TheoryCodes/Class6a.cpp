// Data Structure Theory on 2/5/2024.
// Created by mdti0 on 2/10/2024.
// Bubble sort

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, i, step;
    cout << "Enter array size: ";
    cin >> n;
    int a[n];
    cout << "Insert " << n << " numbers: ";
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (step = 1; step <= n - 1; step++) {
        for (i = 0; i <= n - 1 - step; i++) {
            if (a[i] > a[i + 1]) {
                swap(a[i], a[i + 1]);
            }
        }
    }
    cout << "Sorted numbers: ";
    for (i = 0; i < n; i++) {
        cout << " " << a[i];
    }

    return 0;
}