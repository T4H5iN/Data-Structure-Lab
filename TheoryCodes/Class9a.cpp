// Data Structure Theory on 2/20/2024.
// Created by mdti0 on 3/8/2024.
// Recursion

#include <bits/stdc++.h>

using namespace std;

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    if (n == 1) {
        cout << n << "st fibonacci number is " << fibonacci(n);
    } else if (n == 2) {
        cout << n << "nd fibonacci number is " << fibonacci(n);
    } else if (n == 3) {
        cout << n << "rd fibonacci number is " << fibonacci(n);
    } else {
        cout << n << "th fibonacci number is " << fibonacci(n);
    }
    return 0;
}