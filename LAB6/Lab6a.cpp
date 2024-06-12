// Data Structure LAB on 3/4/2024.
// Created by mdti0 on 3/8/2024.
// Struct

#include<iostream>

using namespace std;

struct student {
    string name;
    int id;
    double age, cgpa;

    void input(string studentName, int studentId, double studentAge, double studentCgpa) {
        name = studentName;
        id = studentId;
        age = studentAge;
        cgpa = studentCgpa;
    }
};

// Bubble Sort
void bubbleSort(student arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].id > arr[j + 1].id) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Selection Sort
void selectionSort(student arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j].age < arr[minIndex].age) {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}

// Insertion Sort
void insertionSort(student arr[], int n) {
    for (int i = 1; i < n; i++) {
        student key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j].cgpa > key.cgpa) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int n;
    cout << "Enter the number of Students info you want to take: ";
    cin >> n;
    student arr[n];

    for (int i = 0; i < n; i++) {
        string name;
        int id;
        double age, cgpa;

        cout << "Enter id, age, and CGPA for student " << i + 1 << ": ";
        cin >> id >> age >> cgpa;
        cin.ignore();  // Ignore the newline character from the previous input

        cout << "Enter name for student " << i + 1 << ": ";
        getline(cin, name);

        arr[i].input(name, id, age, cgpa);
    }

    // Sort each array
    bubbleSort(arr, n);
    selectionSort(arr, n);
    insertionSort(arr, n);

    // Print sorted arrays
    cout << "IDs: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i].id << " ";
    }
    cout << "\n";

    cout << "Ages: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i].age << " ";
    }
    cout << "\n";

    cout << "CGPAs: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i].cgpa << " ";
    }
    cout << "\n";

    return 0;
}