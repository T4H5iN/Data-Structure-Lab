// Data Structure LAB on 3/11/2024.
// Created by mdti0 on 3/16/2024.
// Traverse

#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter a number to determine if it is a Palindrome number: ";
    cin >> n;
    int temp = n;

    while (n > 0) {
        int rem = n % 10;
        sum = sum * 10 + rem;
        n = n / 10;
    }

    if (sum == temp) {
        cout << "This is a Palindrome number." << endl;
    } else {
        cout << "This is not a Palindrome number." << endl;
    }
    return 0;
}