// Data Structure LAB on 4/22/2024.
// Created by mdti0 on 4/28/2024.
// Stack

#include<iostream>

using namespace std;

void push(int Basket[], int x, int &top, int &size) {
    Basket[top] = x;
    top++;
    size++;
}

bool empty(int &top) {
    return top == 0;
}

void pop(int &top, int &size) {
    top--;
    size--;
}

void traverse(int Basket[], int &top, int &size) {
    while (!empty(top)) {
        int top_element = Basket[top - 1];
        cout << top_element << " ";
        pop(top, size);
    }
}

int top(int Basket[], int &top) {
    return Basket[top - 1];
}

int main() {
    int n, x;
    cout << "Enter the number of elements: ";
    cin >> n;
    int Basket[n], top_element = 0, size = 0;

    cout << "Enter the elements: ";
    for (int i = 1; i <= n; i++) {
        cin >> x;
        push(Basket, x, top_element, size);
    }
    cout << "The size of the stack is " << size << endl;
    cout << "Top element is " << top(Basket, top_element) << endl;

    if (!empty(top_element)) {
        cout << "Basket is now full" << endl;
    }

    cout << "The elements in the stack are: ";
    traverse(Basket, top_element, size);

    if (empty(top_element)) {
        cout << "\nBasket is now empty" << endl;
    }

    return 0;
}