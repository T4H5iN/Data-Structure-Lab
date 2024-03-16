// Data Structure LAB on 3/11/2024.
// Created by mdti0 on 3/16/2024.
// Recursion

#include<bits/stdc++.h>

using namespace std;

int Power(int a, int b) {
    if (b == 1) return a;
    if (b % 2 == 0) {
        int pow = Power(a, b / 2);
        return pow * pow;
    } else if (b % 2 == 1) {
        return (a * Power(a, b - 1));
    }
}

int main() {
    int a, b;
    cout << "Enter base number: ";
    cin >> a;
    cout << "Enter exponent number: ";
    cin >> b;

    cout << "The power of " << a << "^" << b << " is: " << Power(a, b) << endl;

    return 0;
}