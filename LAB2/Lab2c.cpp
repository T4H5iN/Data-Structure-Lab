// Data Structure LAB on 1/29/2024.
// Created by mdti0 on 1/30/2024.
// Linear Search

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, flag = 0;
    cout << "Enter array size: ";
    cin >> n;
    int a[n];
    cout << "Insert " << n << " numbers:";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "Enter the value of k: ";
    cin >> k;
    for (int i = 0; i < n; i++) {
        if (a[i] == k) {
            cout << "The position of k is: " << i << endl;
            flag = 1;
            break;
        }
    }

    if (flag == 0) {
        cout << "-1" << endl;
    }
    return 0;
}