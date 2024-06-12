// Data Structure Theory on 4/4/2024.
// Created by mdti0 on 5/1/2024.
// Doubly Linked List

#include <iostream>

using namespace std;

struct Node {
    int data;
    Node *prev;
    Node *next;
};

Node *head = NULL;

void traverse() {
    if (!head) {
        cout << "empty." << endl;
        return;
    }
    Node *temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtBeginning(int data) {
    Node *newNode = new Node;
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = head;
    if (head) {
        head->prev = newNode;
    }
    head = newNode;
}

void insertAtEnd(int data) {
    Node *newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    if (!head) {
        newNode->prev = NULL;
        head = newNode;
    } else {
        Node *temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}

void insertAfter(int data, int after) {
    Node *newNode = new Node;
    newNode->data = data;
    if (!head) {
        newNode->prev = NULL;
        newNode->next = NULL;
        head = newNode;
    } else {
        Node *temp = head;
        while (temp && temp->data != after) {
            temp = temp->next;
        }
        if (!temp) {
            cout << after << " not found." << endl;
            delete newNode;
        } else {
            newNode->next = temp->next;
            newNode->prev = temp;
            if (temp->next) {
                temp->next->prev = newNode;
            }
            temp->next = newNode;
        }
    }
}

void deleteNode(int data) {
    if (!head) return;

    Node *temp = head;
    while (temp && temp->data != data) {
        temp = temp->next;
    }
    if (!temp) {
        cout << data << " not found." << endl;
        return;
    }

    if (temp->prev) {
        temp->prev->next = temp->next;
    } else {
        head = temp->next;
    }
    if (temp->next) {
        temp->next->prev = temp->prev;
    }
    delete temp;
}

Node *search(int data) {
    Node *temp = head;
    while (temp && temp->data != data) {
        temp = temp->next;
    }
    return temp;
}

int main() {
    int x = 1, y, z;

    cout << "1. Insert at Beginning" << endl;
    cout << "2. Insert at End" << endl;
    cout << "3. Insert After a Node" << endl;
    cout << "4. Traverse" << endl;
    cout << "5. Delete a Specific Node" << endl;
    cout << "6. Search" << endl;
    cout << "7. Exit" << endl;

    while (x != 7) {
        cout << "Enter a option: ";
        cin >> x;
        switch (x) {
            case 1:
                cout << "Enter value to insert at beginning: ";
                cin >> y;
                insertAtBeginning(y);
                break;
            case 2:
                cout << "Enter value to insert at end: ";
                cin >> y;
                insertAtEnd(y);
                break;
            case 3:
                cout << "Enter value to insert: ";
                cin >> y;
                cout << "Enter value after which to insert: ";
                cin >> z;
                insertAfter(y, z);
                break;
            case 4:
                cout << "Doubly Linked List: ";
                traverse();
                break;
            case 5:
                cout << "Enter value to delete: ";
                cin >> y;
                deleteNode(y);
                cout << y << " deleted." << endl;
                break;
            case 6:
                cout << "Enter value to search: ";
                cin >> y;
                if (search(y)) {
                    cout << y << " found." << endl;
                } else {
                    cout << y << " not found." << endl;
                }
                break;
            case 7:
                break;
            default:
                cout << "Invalid option!" << endl;
        }
    }
    return 0;
}