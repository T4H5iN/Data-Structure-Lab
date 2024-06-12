// Data Structure Theory on 4/4/2024.
// Created by mdti0 on 5/1/2024.
// Circular Linked List

#include <iostream>

using namespace std;

struct Node {
    int data;
    Node *next;
};

Node *head = NULL;

void traverse() {
    if (!head) {
        cout << "empty." << endl;
        return;
    }
    Node *temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

void insertAtBeginning(int data) {
    Node *newNode = new Node;
    newNode->data = data;
    if (!head) {
        head = newNode;
        newNode->next = head;
    } else {
        Node *temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
        head = newNode;
    }
}

void insertAtEnd(int data) {
    Node *newNode = new Node;
    newNode->data = data;
    if (!head) {
        head = newNode;
        newNode->next = head;
    } else {
        Node *temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
    }
}

void insertAfter(int data, int after) {
    Node *newNode = new Node;
    newNode->data = data;
    if (!head) {
        head = newNode;
        newNode->next = head;
    } else {
        Node *temp = head;
        do {
            if (temp->data == after) {
                newNode->next = temp->next;
                temp->next = newNode;
                return;
            }
            temp = temp->next;
        } while (temp != head);
        cout << after << " not found." << endl;
    }
}

void deleteNode(int data) {
    if (!head) return;

    Node *temp = head;
    Node *prev = NULL;
    do {
        if (temp->data == data) {
            if (prev) {
                prev->next = temp->next;
            } else {
                if (head->next == head) {
                    head = NULL;
                } else {
                    Node *last = head;
                    while (last->next != head) {
                        last = last->next;
                    }
                    head = head->next;
                    last->next = head;
                }
            }
            delete temp;
            return;
        }
        prev = temp;
        temp = temp->next;
    } while (temp != head);
    cout << data << " not found." << endl;
}

Node *search(int data) {
    if (!head) return NULL;

    Node *temp = head;
    do {
        if (temp->data == data) {
            return temp;
        }
        temp = temp->next;
    } while (temp != head);

    return NULL;
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
                cout << "Circular Linked List: ";
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
