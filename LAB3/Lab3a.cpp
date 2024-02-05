// Data Structure LAB on 2/5/2024.
// Created by mdti0 on 2/5/2024.
// Binary Search

#include <iostream>

using namespace std;

int main() {
    int i, n, q;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    cout << "Insert " << n << " numbers:";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "How many query you want to do?\n";
    cin >> q;
    cout << "Enter the numbers you want to find:\n";
    for (i = 0; i < q; i++) {
        int iterations = 0;
        int start = 0;
        int end = n - 1;
        int mid;
        int k;
        cin >> k;

        while (start <= end) {
            iterations++;
            mid = (start + end) / 2;
            if (k == arr[mid]) {
                cout << "Position: " << mid << endl;
                cout << "Number of Iterations: " << iterations << endl;
                break;
            } else if (k < arr[mid]) {
                end = mid - 1;
            } else if (k > arr[mid]) {
                start = mid + 1;
            }
        }

        if (start > end) {
            cout << "-1" << endl;
        }
    }
    return 0;
}
