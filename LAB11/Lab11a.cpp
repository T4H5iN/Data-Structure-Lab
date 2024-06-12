// Data Structure LAB on 5/6/2024.
// Created by mdti0 on 5/6/2024.
// Infix to postfix

#include <stack>
#include <string>
#include <iostream>

using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    return 0;
}

string infixToPostfix(string s) {
    stack<char> basket;
    string p;
    s = "(" + s + ")";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            continue;
        }
        if (s[i] >= '0' && s[i] <= '9') {
            while (s[i] >= '0' && s[i] <= '9') {
                p += s[i++];
            }
            p += ' ';
            i--;
        } else if (s[i] == '(') {
            basket.push(s[i]);
        } else if (s[i] == ')') {
            while (basket.top() != '(') {
                p += basket.top();
                p += ' ';
                basket.pop();
            }
            basket.pop();
        } else {
            while (!basket.empty() && precedence(basket.top()) >= precedence(s[i])) {
                p += basket.top();
                p += ' ';
                basket.pop();
            }
            basket.push(s[i]);
        }
    }
    return p;
}

double calculatePostfix(string s) {
    stack<double> st;
    string temp;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') continue;
        if (s[i] >= '0' && s[i] <= '9') {
            double number = 0;
            while (i < s.length() && s[i] >= '0' && s[i] <= '9') {
                number = number * 10 + (s[i] - '0');
                i++;
            }
            i--;
            st.push(number);
        } else {
            double op2 = st.top();
            st.pop();
            double op1 = st.top();
            st.pop();

            switch (s[i]) {
                case '+':
                    st.push(op1 + op2);
                    break;
                case '-':
                    st.push(op1 - op2);
                    break;
                case '*':
                    st.push(op1 * op2);
                    break;
                case '/':
                    st.push(op1 / op2);
                    break;
            }
        }
    }

    return st.top();
}

int main() {
    string Q;
    cout << "Enter the infix expression: ";
    getline(cin, Q);

    string postfix = infixToPostfix(Q);
    cout << "Postfix expression: " << postfix << endl;
    cout << "Result: " << calculatePostfix(postfix) << endl;
    return 0;
}