// Data Structure LAB on 1/29/2024.
// Created by mdti0 on 1/29/2024.
// Traverse

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,sum=0,odd=0,even=0;
    cout << "Enter array size: ";
    cin >> n;
    int a[n];
    cout << "Insert " << n << " numbers:";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum+=a[i];

        if(a[i]%2==0){
            even+=a[i];
        }else{
            odd+=a[i];
        }
    }

    cout<<"The sum of all given numbers: "<<sum<<endl;
    cout<<"The sum of all even numbers: "<<even<<endl;
    cout<<"The sum of all odd numbers: "<<odd<<endl;

    return 0;
}