// Data Structure LAB on 1/29/2024.
// Created by mdti0 on 1/29/2024.
// Linear Search

#include <bits/stdc++.h>

using namespace std;

int main() {
    int q, k, n;
    cout << "Enter array size: ";
    cin >> n;
    int a[n];
    cout << "Insert " << n << " numbers:";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "How many query you want to do?\n";
    cin >> q;
    cout << "Enter the numbers you want to find:\n";
    for (int i = 0; i < q; i++) {
        cin >> k;
        int flag = 0;
        for (int j = 0; j < n; j++) {
            if (a[j] == k) {
                cout << "Yes"<<endl;
                flag = 1;
                break;
            }
        }

        if (flag == 0) {
            cout << "No"<<endl;
        }
    }
    return 0;
}