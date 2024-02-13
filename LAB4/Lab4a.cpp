// Data Structure LAB on 2/12/2024.
// Created by mdti0 on 2/12/2024.
// Bubble sort

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, i, step, swaps, tswap = 0;
    cout << "Enter array size: ";
    cin >> n;
    int a[n];
    cout << "Enter " << n << " numbers: ";
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (step = 1; step <= n - 1; step++) {
        swaps = 0;
        for (i = 0; i <= n - 1 - step; i++) {
            if (a[i] > a[i + 1]) {
                swap(a[i], a[i + 1]);
                swaps++;
                tswap++;
            }
        }
        cout << "\nState of the array at step " << step << ": ";
        for (i = 0; i < n; i++) {
            cout << " " << a[i];
        }
        cout << "\nNo of swaps required at step " << step << " is " << swaps;
        cout << "\n";
    }
    cout << "\nTotal no of swaps required :" << tswap;
    cout << "\nSorted numbers after implementing bubble sort: ";
    for (i = 0; i < n; i++) {
        cout << " " << a[i];
    }
    cout << "\n";
    return 0;
}
