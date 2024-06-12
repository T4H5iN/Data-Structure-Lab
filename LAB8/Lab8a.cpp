#include <bits/stdc++.h>

using namespace std;

struct student {
    string name;
    int id;
    double cgpa, age;

    student(string n, int i, double c, double a) {
        name = n;
        id = i;
        cgpa = c;
        age = a;
    }
};

struct node {
    student data;
    node *next;

    node(student s) {
        data = s;
        next = NULL;
    }
};

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    node *head = NULL;
    cout << "Enter student information (name, id, cgpa, age):" << endl;
    for (int i = 0; i < n; i++) {
        string name;
        int id;
        double cgpa, age;
        cin >> name >> id >> cgpa >> age;
        student newStudent(name, id, cgpa, age);
        node *newNode = new node(newStudent);
        if (!head) {
            head = newNode;
        } else {
            node *temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    double totalCGPA = 0.0;
    int count = 0;
    node *temp = head;
    while (temp) {
        totalCGPA += temp->data.cgpa;
        count++;
        temp = temp->next;
    }
    double averageCGPA = (count == 0) ? 0.0 : totalCGPA / count;
    cout << "Average CGPA of the class: " << fixed << setprecision(2) << averageCGPA << endl;

    cout << "Student information:" << endl;
    temp = head;
    while (temp) {
        cout << "Name: " << temp->data.name << ", ID: " << temp->data.id
             << ", CGPA: " << temp->data.cgpa << ", Age: " << temp->data.age << endl;
        temp = temp->next;
    }

    cout << "Enter new student information (name, id, cgpa, age):" << endl;
    string newName;
    int newId;
    double newCGPA, newAge;
    cin >> newName >> newId >> newCGPA >> newAge;
    student newStudent(newName, newId, newCGPA, newAge);
    node *newNode = new node(newStudent);
    if (!head) {
        head = newNode;
    } else {
        node *temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    cout << "Updated student information:" << endl;
    temp = head;
    while (temp) {
        cout << "Name: " << temp->data.name << ", ID: " << temp->data.id
             << ", CGPA: " << temp->data.cgpa << ", Age: " << temp->data.age << endl;
        temp = temp->next;
    }

    temp = head;
    while (temp) {
        node *toDelete = temp;
        temp = temp->next;
        delete toDelete;
    }

    return 0;
}