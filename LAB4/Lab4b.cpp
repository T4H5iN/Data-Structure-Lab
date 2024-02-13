// Data Structure LAB on 2/12/2024.
// Created by mdti0 on 2/12/2024.
// Selection sort

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, i, step, minValue, minPos, firstPos, swaps, tswap = 0;
    cout << "Enter array size: ";
    cin >> n;
    int a[n];
    cout << "Insert " << n << " numbers: ";
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (step = 1; step <= n - 1; step++) {
        firstPos = step;
        minValue = a[firstPos];
        minPos = firstPos;
        swaps = 0;
        for (i = firstPos + 1; i <= n - 1; i++) {
            if (a[i] < minValue) {
                minValue = a[i];
                minPos = i;
            }
        }
        swap(a[firstPos], a[minPos]);
        swaps++;
        tswap++;
        cout << "\nState of the array at step " << step << ": ";
        for (i = 0; i < n; i++) {
            cout << " " << a[i];
        }
        cout << "\nNo of swaps required at step " << step << " is " << swaps;
        cout << "\n";
    }
    cout << "\nTotal no of swaps required :" << tswap;
    cout << "\nSorted numbers after implementing selection sort: ";
    for (i = 0; i < n; i++) {
        cout << " " << a[i];
    }
    cout << endl;
    return 0;
}
