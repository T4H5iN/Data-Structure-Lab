// Data Structure Thory on 2/1/2024.
// Created by mdti0 on 2/6/2024.
// Delete

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, i, d, p;
    cout << "Enter array size: ";
    cin >> n;
    int a[n];
    cout << "Insert " << n << " numbers: ";
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Enter the number you want to delete: ";
    cin >> d;
    for (i = 0; i < n; i++) {
        if (d == a[i]) {
            p = i;
            for (i = p; i < n - 1; i++) {
                a[i] = a[i + 1];
            }
            n--;
            break;
        }
    }

    for (i = 0; i < n; i++) {
        cout << " " << a[i];
    }

    return 0;
}