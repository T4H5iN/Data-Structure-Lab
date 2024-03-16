// Data Structure Theory on 3/11/2024.
// Created by mdti0 on 3/16/2024.
// Linked List

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
    node *head, *first, *second, *third, *i;
    first = new node;
    second = new node;
    int x;
    cin >> x;
    first->data = x;
    first->next = second;
    int y;
    cin >> y;
    second->data = y;
    second->next = third;
    int z;
    cin >> z;
    third->data = z;
    third->next = NULL;
    head = first;
    for (i = head; i != NULL; i = i->next) {
        cout << i->data << endl;
    }
}