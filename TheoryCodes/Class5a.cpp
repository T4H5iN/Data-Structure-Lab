// Data Structure Theory on 2/5/2024.
// Created by mdti0 on 2/10/2024.
// Selection Sort

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, i, step, minValue, minPos, firstPos;
    cout << "Enter array size: ";
    cin >> n;
    int a[n];
    cout << "Insert " << n << " numbers: ";
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (step = 0; step < n - 1; step++) {
        firstPos = step;
        minValue = a[firstPos];
        minPos = firstPos;
        for (i = firstPos + 1; i <= n - 1; i++) {
            if (a[i] < minValue) {
                minValue = a[i];
                minPos = i;
            }
        }
        swap(a[firstPos], a[minPos]);
    }
    cout << "Sorted numbers: ";
    for (i = 0; i < n; i++) {
        cout << " " << a[i];
    }

    return 0;
}