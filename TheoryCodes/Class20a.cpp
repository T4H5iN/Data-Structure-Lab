// Data Structure Theory on 4/29/2024.
// Created by mdti0 on 5/1/2024.
// Circular Queue

#include<iostream>

using namespace std;

int front = -1, rear = -1, n;

void enqueue(int x, int Queue[]) {
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

void traverse(int Queue[]) {
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

void front_rear(int Queue[]) {
    if (front == -1 && rear == -1) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Front element: " << Queue[front] << endl;
        cout << "Rear element: " << Queue[rear] << endl;
    }
}

int main() {
    cout << "Enter the size of the queue: ";
    cin >> n;
    int Queue[n];
    int choice = 0, value;
    cout << "\n1. Enqueue" << endl;
    cout << "2. Dequeue" << endl;
    cout << "3. Display Front and Rear" << endl;
    cout << "4. Display Queue" << endl;
    cout << "5. Check if Queue is Empty" << endl;
    cout << "6. Get Queue Size\n";

    while (choice != 7) {
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter the value to enqueue: ";
                cin >> value;
                enqueue(value, Queue);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                front_rear(Queue);
                break;
            case 4:
                traverse(Queue);
                break;
            case 5:
                isEmpty();
                break;
            case 6:
                qsize();
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }
    return 0;
}
