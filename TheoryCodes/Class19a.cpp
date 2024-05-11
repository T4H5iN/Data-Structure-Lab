// Data Structure Theory on 4/25/2024.
// Created by mdti0 on 5/1/2024.
// Queue

#include<iostream>

using namespace std;

int front = -1, rear = -1, n;
int *Queue = new int[n];

void enqueue(int x, int n) {
    if (rear == n - 1) {
        cout << "Overflow Condition: Queue Full" << endl;
        return;
    } else if (front == -1 && rear == -1) {
        front = rear = 0;
        Queue[rear] = x;
    } else {
        rear++;
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
        front++;
    }
    cout << "Element dequeued" << endl;
}

void empty() {
    if (front == -1 && rear == -1) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue is not empty" << endl;
    }
}

int queue_size() {
    if (front == -1 && rear == -1) {
        return 0;
    }
    int size = (rear - front) + 1;
    return size;
}

void traverse() {
    if (front == -1 && rear == -1) {
        cout << "Queue is empty" << endl;
        return;
    } else {
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << Queue[i] << " ";
        }
    }
}

void display() {
    if (front == -1) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Front element: " << Queue[front] << endl;
        cout << "Rear element: " << Queue[rear] << endl;
    }
}

int main() {
    cout << "Enter the size of the queue: ";
    cin >> n;
    int choice = 0, value;
    while (choice != 7) {
        cout
                << "\n1.Enqueue\n2.Dequeue\n3.Display Front and Rear\n4.Display Queue\n5.Check if Queue is Empty\n6.Get Queue Size\n7.Exit\n";
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter the value to enqueue: ";
                cin >> value;
                enqueue(value, n);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                traverse();
                break;
            case 5:
                empty();
                break;
            case 6:
                cout << "Size of the queue: " << queue_size() << endl;
                break;
            case 7:
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }
    return 0;
}