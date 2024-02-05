// Data Structure LAB on 1/22/2024.
// Created by mdti0 on 1/29/2024.
// Traverse

#include <bits/stdc++.h>

using namespace std;

int main() {
    int i, chk, j;
    cout << "Prime Numbers Between 1 to 500 are: ";

    for (i = 1; i <= 500; i++) {
        chk = 0;
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                chk++;
                break;
            }
        }
        if (chk == 0 && i != 1) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}

