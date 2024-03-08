// Data Structure Theory on 3/7/2024.
// Created by mdti0 on 3/8/2024.
// Pointer

#include <bits/stdc++.h>

using namespace std;

int main() {
    int x = 10;

    // 1 level integer pointer
    int *p;
    p = &x;
    cout << p << " " << *p << " " << &p << endl;
    *p = 20;
    cout << x << " " << *p << endl;
    x = 500;
    cout << x << " " << *p << endl;

    // 2 level integer pointer
    int **q;
    q = &p;
    cout << x << " " << &x << " " << p << " " << &p << " " << *p << " " << q << " " << **q << " " << &q << endl;

    // 3 level integer pointer
    int ***r;
    r = &q;
    ***r = 2000;
    cout << x << " " << &x << " " << p << " " << &p << " " << *p << " " << q << " " << **q << " " << &q << " " << r
         << " " << &r << " " << ***r << endl;

    return 0;
}