// Data Structure LAB on 3/4/2024.
// Created by mdti0 on 3/8/2024.
// Struct

#include<bits/stdc++.h>
using namespace std;

struct student
{
    string name;
    int id;
    double age,cgpa;

    void input()
    {
        /*cout << "Enter your name: ";
        cin.ignore();
        getline(cin,name);*/
        cout << "Enter your ID: ";
        cin >> id;
        cout << "Enter your age: ";
        cin >> age;/*
        cout << "Enter your CGPA: ";
        cin >> cgpa;
        cout<<"\n";*/
    }
};

BS(int n, int arr[])
{
    for (int step = 1; step <= n - 1; step++)
    {
        for (int i = 0; i <= n - 1 - step; i++)
        {
            if (arr[i].id > arr[i + 1].id)
            {
                swap(arr[i].id, arr[i + 1].id);
            }
            if (arr[i].age > arr[i + 1].age)
            {
                swap(arr[i].age, arr[i + 1].age);
            }
        }
    }
}
/*

SS(int n)
{
    for (int step = 0; step < n - 1; step++)
    {
        int firstPos = step;
        int minValue = a[firstPos];
        int minPos = firstPos;
        for (int i = firstPos + 1; i <= n - 1; i++)
        {
            if (a[i] < minValue)
            {
                minValue = a[i];
                minPos = i;
            }
        }
        swap(a[firstPos], a[minPos]);
    }
}

IS(int n)
{
    for (int step = 1; step <= n - 1; step++)
    {
        int firstElement = a[step];
        int i = step - 1;

        while (i >= 0 && firstElement < a[i])
        {
            a[i + 1] = a[i];
            i--;
        }

        a[i + 1] = firstElement;
    }
}
*/
int main()
{
    int n;
    cout<<"Enter the number of Students info you want to take: ";
    cin>>n;
    struct student arr[n];

    for(int i=0; i<n; i++)
    {
        arr[i].input();
    }

    //Bubble Sort
/*    for (int step = 1; step <= n - 1; step++)
    {
        for (int i = 0; i <= n - 1 - step; i++)
        {
            if (arr[i].id > arr[i + 1].id)
            {
                swap(arr[i].id, arr[i + 1].id);
            }
            if (arr[i].age > arr[i + 1].age)
            {
                swap(arr[i].age, arr[i + 1].age);
            }
        }
    }
 */
    for(int i=0; i<n; i++)
    {

        cout<<arr[i]" "<<BS(n,arr[i]);
    }

    cout<<"\n";

    for(int i=0; i<n; i++)
    {
        cout<<" "<<BS(n,arr[i]);
    }

    return 0;
}
