// Data Structure Theory on 4/29/2024.
// Created by mdti0 on 5/1/2024.
// Circular Queue

#include<iostream>

using namespace std;

int front = -1, rear = -1, n;
Queue[n];

void enqueue(int x) {
    if ((rear + 1) % n == front) {
        cout << "Overflow Condition: Queue Full" << endl;
        return;
    } else if (front == -1 && rear == -1) {
        front = rear = 0;
        Queue[rear] = x;
    } else {
        rear = (rear + 1) % n;
        Queue[rear] = x;
    }
    cout << "Element enqueued" << endl;
}

void dequeue() {
    if (front == -1 && rear == -1) {
        cout << "Underflow Condition: Queue Empty" << endl;
        return;
    } else if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % n;
    }
    cout << "Element dequeued" << endl;
}

void isEmpty() {
    if (front == -1 && rear == -1) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue is not empty" << endl;
    }
}

void qsize() {
    if (front == -1 && rear == -1) {
        cout << "Queue is Empty" << endl;
    } else {
        int size = (rear - front + n) % n + 1;
        cout << "Size of the queue is " << size << endl;
    }
}

void traverse() {
    if (front == -1 && rear == -1) {
        cout << "Queue is empty" << endl;
        return;
    } else {
        cout << "Queue elements: ";
        cout << Queue[front] << " ";
        for (int i = front + 1; i != (rear + 1) % n; i = (i + 1) % n) {
            cout << Queue[i] << " ";
        }
        cout << endl;
    }
}

void front_rear() {
    if (front == -1 && rear == -1) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Front element: " << Queue[front] << endl;
        cout << "Rear element: " << Queue[rear] << endl;
    }
}
