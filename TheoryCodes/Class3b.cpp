// Data Structure Theory on 1/29/2024.
// Created by mdti0 on 2/10/2024.
// Left Shifting

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, i;
    cout << "Enter array size: ";
    cin >> n;
    int a[n + 1];
    a[0] = {};
    cout << "Enter " << n << " numbers: ";
    for (i = 1; i <= n; i++) {
        cin >> a[i];
    }

    cout << "Before Left Shifting\n";

    for (i = 0; i <= n; i++) {
        cout << " " << a[i];
    }

    for (i = 1; i <= n; i++) {
        a[i - 1] = a[i];
    }
    a[n] = {};
    cout << "\nAfter Left Shifting\n";

    for (i = 0; i <= n; i++) {
        cout << " " << a[i];
    }

    return 0;
}