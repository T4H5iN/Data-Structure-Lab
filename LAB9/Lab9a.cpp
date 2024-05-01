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
    cout << "The size of the stack is " << Basket.size() << endl;
    cout << "Top element of the stack is " << Basket.top() << endl;
    if (!Basket.empty()) {
        cout << "Basket is now full" << endl;
    }
    cout << "The elements in the stack are: ";
    while (!Basket.empty()) {
        int top_element = Basket.top();
        cout << top_element << " ";
        Basket.pop();
    }
    if (Basket.empty()) {
        cout << "\nBasket is now empty" << endl;
    }
    return 0;
}
