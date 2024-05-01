// Data Structure LAB on 4/29/2024.
// Created by mdti0 on 5/1/2024.
// Compute (a^b)%m

#include <iostream>

using namespace std;

int main() {
    int a, b, m;
    cout << "Enter a, b, and m: ";
    cin >> a >> b >> m;
    int result = 1;
    for (int i = 1; i <= b; i++) {
        result = (result * a) % m;
    }
    cout << "The result is " << result << endl;
    return 0;
}