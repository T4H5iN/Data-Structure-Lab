// Data Structure LAB on 4/22/2024.
// Created by mdti0 on 4/28/2024.
// Stack

#include<iostream>

using namespace std;

void push(int Basket[], int x, int &top, int n) {
    if (top < n) {
        Basket[top] = x;
    } else {
        cout << "Basket is full. Cannot push more elements." << endl;
    }
}

bool empty(int top) {
    return top == 0;
}

void pop(int &top) {
    if (top > 0) {
        top--;
    } else {
        cout << "Basket is empty. Cannot pop." << endl;
    }
}

int main() {
    int n, x;
    cout << "Enter the number of elements: ";
    cin >> n;
    int Basket[n], top = 0;

    cout << "Enter the elements: ";
    for (int i = 1; i <= n; i++) {
        cin >> x;
        push(Basket, x, top, n);
        top++;
    }

    cout << "\nTop element is " << Basket[top - 1];

    if (empty(top)) {
        cout << "\nBasket is now empty" << endl;
    } else {
        cout << "\nBasket is not empty" << endl;
    }

    while (!empty(top)) {
        int top_element = Basket[top - 1];
        cout << top_element << " ";
        pop(top);
    }

    if (empty(top)) {
        cout << "\nBasket is now empty" << endl;
    } else {
        cout << "\nBasket is not empty" << endl;
    }

    return 0;
}
