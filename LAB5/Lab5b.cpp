// Data Structure LAB on 2/19/2024.
// Created by mdti0 on 3/8/2024.
// Struct

#include<bits/stdc++.h>

using namespace std;

struct student {
    string name;
    int id;
    double age, cgpa;

    double input() {
        cout << "Enter your name: \n";
        cin.ignore();
        getline(cin, name);
        cout << "Enter your ID: \n";
        cin >> id;
        cout << "Enter your age: \n";
        cin >> age;
        cout << "Enter your cgpa: \n";
        cin >> cgpa;
        cout << "\n";
        return cgpa;
    }
};

int main() {
    int n;
    double cgpa, sum = 0;
    student s;
    cout << "How many information you want to enter?" << endl;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cgpa = s.input();
        sum += cgpa;
    }
    cout << "Average CGPA: " << sum / n << endl;
    return 0;
}