// Data Structure LAB on 2/12/2024.
// Created by mdti0 on 2/12/2024.
// Struct

#include<bits/stdc++.h>

using namespace std;

struct studentA {
    int idA, batchA;
    double ageA;
};
struct studentB {
    int idB, batchB;
    double ageB;
};
struct studentC {
    int idC, batchC;
    double ageC;
};
struct studentD {
    int idD, batchD;
    double ageD;
};
struct studentE {
    int idE, batchE;
    double ageE;
};

int main() {
    studentA a;
    studentB b;
    studentC c;
    studentD d;
    studentE e;

    cout << "Enter info for student A\n";
    cin >> a.idA >> a.batchA >> a.ageA;
    cout << "Enter info for student B\n";
    cin >> b.idB >> b.batchB >> b.ageB;
    cout << "Enter info for student C\n";
    cin >> c.idC >> c.batchC >> c.ageC;
    cout << "Enter info for student D\n";
    cin >> d.idD >> d.batchD >> d.ageD;
    cout << "Enter info for student E\n";
    cin >> e.idE >> e.batchE >> e.ageE;

    cout << "Student A: " << a.idA << " " << a.batchA << " " << a.ageA << endl;
    cout << "Student B: " << b.idB << " " << b.batchB << " " << b.ageB << endl;
    cout << "Student C: " << c.idC << " " << c.batchC << " " << c.ageC << endl;
    cout << "Student D: " << d.idD << " " << d.batchD << " " << d.ageD << endl;
    cout << "Student E: " << e.idE << " " << e.batchE << " " << e.ageE << endl;

    return 0;
}

