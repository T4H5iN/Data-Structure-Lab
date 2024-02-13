// Data Structure LAB on 2/12/2024.
// Created by mdti0 on 2/12/2024.
// Methods in Struct

#include<bits/stdc++.h>

using namespace std;

struct student {
    int id, batch;
    double age;

    void input() {
        cout << "Enter info: \n";
        cin >> id >> batch >> age;
    }

    void give_introduction() {
        cout << "ID: " << id << endl;
        cout << "Batch: " << batch << endl;
        cout << "Age: " << age << endl;
        cout << "\n";
    }
};

int main() {
    student a;
    student b;
    student c;
    student d;
    student e;

    a.input();
    a.give_introduction();

    b.input();
    b.give_introduction();

    c.input();
    c.give_introduction();

    d.input();
    d.give_introduction();

    e.input();
    e.give_introduction();

    return 0;
}

