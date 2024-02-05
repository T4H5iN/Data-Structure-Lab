// Data Structure Thory on 2/1/2024.
// Created by mdti0 on 2/6/2024.
// Search

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, i;
    cout << "Enter array size: ";
    cin >> n;
    int a[n];
    cout << "Insert " << n << " numbers: ";
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }

    int minV = a[0];
    int minP = 0;
    for (i = 1; i < n; i++) {
        if (a[i] < minV) {
            minV = a[i];
            minP = i;
        }
    }

    cout << "The minimum value is: " << minV << " and its position is: " << minP << endl;

    return 0;
}