// Data Structure Theory on 3/21/2024.
// Created by mdti0 on 3/22/2024.
// Linked List, Delete

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
    int position, x, elements;
    node *head, *temp, *prev_node, *new_node, *next_node, *i;
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
    cout << "Enter the position you want to Delete the data: ";
    cin >> position;
    if (position == 1) {
        temp = head;
        //head->data;
        head = head->next;
        delete temp;
    }
    if (position > 1) {
        i = head;
        for (int k = 1; k <= position - 1; k++) {
            prev_node = i;
            i = i->next;
        }
        next_node = i->next;
        prev_node->next = next_node;
        delete i;
    }

    /*
        Standalone condition to insert data at the end of the linked list.

        for (i = head; i->next != NULL; i = i->next) {
            prev_node = i;
        }
        prev_node->next = NULL;
        delete i;
    */

    for (i = head; i != NULL; i = i->next) {
        cout << i->data << " ";
    }
    return 0;
}