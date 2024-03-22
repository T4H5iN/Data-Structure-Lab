// Data Structure Theory on 3/18/2024.
// Created by mdti0 on 3/22/2024.
// Linked List, Insert

#include<bits/stdc++.h>

using namespace std;

struct node {
    int data;
    node *next;

    node() {
        next = NULL;
    }
};

int main() {
    int position, key, x, elements;
    node *head, *prev_node, *new_node, *i;
    cout << "Enter the number of input: ";
    cin >> elements;
    cout << "Enter numbers: ";
    cin >> x;
    head = new node;
    head->data = x;
    prev_node = head;
    for (int j = 2; j <= elements; j++) {
        cin >> x;
        new_node = new node;
        new_node->data = x;
        prev_node->next = new_node;
        prev_node = new_node;
    }
    cout << "Enter the data you want to Insert: ";
    cin >> key;
    cout << "Enter the position you want to Insert the data: ";
    cin >> position;
    new_node = new node;
    new_node->data = key;
    if (position == 1) {
        new_node->next = head;
        head = new_node;
    }
    if (position > 1) {
        i = head;
        for (int k = 1; k < position - 1; k++) {
            i = i->next;
        }
        new_node->next = i->next;
        i->next = new_node;
    }

    /*
        Standalone condition to insert data at the end of the linked list.

        for (i = head; i->next != NULL; i = i->next) {}
        i->next = new_node;
    */

    for (i = head; i != NULL; i = i->next) {
        cout << i->data << " ";
    }
    return 0;
}