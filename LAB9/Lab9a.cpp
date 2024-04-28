// Data Structure LAB on 4/22/2024.
// Created by mdti0 on 4/28/2024.
// Stack

#include<iostream>
#include<stack>

using namespace std;

int main() {
    stack<int> Basket;
    int n, x;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 1; i <= n; i++) {
        cin >> x;
        Basket.push(x);
    }
    cout << "\nTop element is " << Basket.top();
    if (Basket.empty()) {
        cout << "\nBasket is now empty" << endl;
    } else {
        cout << "\nBasket is now full" << endl;
    }
    while (!Basket.empty()) {
        int top_element = Basket.top();
        cout << top_element << " ";
        Basket.pop();
    }
    if (Basket.empty()) {
        cout << "\nBasket is now empty" << endl;
    } else {
        cout << "\nBasket is now full" << endl;
    }
    return 0;
}
