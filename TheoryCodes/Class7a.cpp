// Data Structure Theory on 2/12/2024.
// Created by mdti0 on 2/13/2024.
// Insertion sort

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, i, step, firstElement;
    cout << "Enter array size: ";
    cin >> n;
    int a[n];
    cout << "Enter " << n << " numbers: ";
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (step = 1; step <= n - 1; step++) {
        firstElement = a[step];
        i = step - 1;

        while (i >= 0 && firstElement < a[i]) {
            a[i + 1] = a[i];
            i--;
        }

        a[i + 1] = firstElement;

        cout << "\nState of the array at step " << step << ": ";
        for (i = 0; i < n; i++) {
            cout << " " << a[i];
        }
    }

    cout << "\n\nSorted numbers after implementing insertion sort: ";
    for (i = 0; i < n; i++) {
        cout << " " << a[i];
    }
    cout << "\n";

    return 0;
}
