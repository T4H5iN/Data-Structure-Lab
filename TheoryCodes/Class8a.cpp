// Data Structure Theory on 2/19/2024.
// Created by mdti0 on 3/8/2024.
// Recursion

#include <bits/stdc++.h>

using namespace std;

int factorial(int n) {
    if (n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    if (n == 0) {
        cout << "No factorial for 0" << endl;
    } else {
        cout << "Factorial of " << n << " is " << factorial(n);
    }
    return 0;
}