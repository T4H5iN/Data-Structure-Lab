#include <bits/stdc++.h>
using namespace std;

struct student{
    string name;
    int id;
    double cgpa;
    double age;
};

struct node {
    int data;
    node *next;

    node() {
        next = NULL;
    }
};

int main() {
    int n, flag = 0;
    cout << "Enter the number of input: ";
    cin >> n;
    int y;
    cout << "Enter the number you seek: ";
    cin >> y;
    node *head, *i, *prev_node;
    head = new node;
    int x;
    cout << "Enter numbers: ";
    cin >> x;
    head->data = x;
    prev_node = head;
    for (int j = 2; j <= n; j++) {
        cin >> x;
        node *new_node;
        new_node = new node;
        new_node->data = x;
        prev_node->next = new_node;
        prev_node = new_node;
    }
    for (i = head; i != NULL; i = i->next) {
        if (i->data == y) {
            flag = 1;
        }
    }
    if (flag == 1) {
        cout << "Found" << endl;
    } else {
        cout << "Not Found" << endl;
    }
}
