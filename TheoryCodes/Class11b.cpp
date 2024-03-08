// Data Structure Theory on 3/7/2024.
// Created by mdti0 on 3/8/2024.
// Pointer

#include <bits/stdc++.h>

using namespace std;

int main() {
    int *p;
    p = new int[5];
    for (int i = 0; i < 5; i++) {
        cout << (p + i) << endl;
    }
}
