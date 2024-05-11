// Data Structure LAB on 5/6/2024.
// Created by mdti0 on 5/6/2024.
// Prefix to postfix

#include<iostream>
#include<stack>

using namespace std;

int main() {
    stack<string> Basket;
    string P = "";
    string Q = "(5+2)*4";
    Basket.push("(");
    Q.append(")");
    cout << Q << endl;
    //while(Basket.empty()){
    for (int i = 0; i < Q.length(); i++) {
        cout << Q[i] << endl;
    }
    //}
}
