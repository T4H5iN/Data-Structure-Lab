// Data Structure Theory on 1/22/2024.
// Created by mdti0 on 2/5/2024.
// Introductory CLass

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
    int i_gcd = a[0];   //Identity of GCD is the first element of an array
    for (i = 1; i < n; i++) {
        i_gcd = __gcd(i_gcd, a[i]);
    }

    cout << "The GCD of given numbers is: " << i_gcd << endl;

    return 0;
}
