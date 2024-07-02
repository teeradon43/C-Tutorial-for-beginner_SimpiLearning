/**
 * file: array2.cpp
 * Basic Array - 2
 * Date: 02-07-2024
 * Author: Teeradon C.
 */

#include<iostream>
using namespace std;

int main() {
    int sum = 0;
    int n;
    cout << "Enter number of inputs: ";
    cin >> n;
    // int array[n];
    // for (int i = 0 ; i < n ; i++) {
    //     cout << "Enter item " << i+1 << ":";
    //     cin >> array[i];
    // }

    // for (int i = 0 ; i < n ; i++) {
    //     sum = sum + array[i];
    // }

    //Optimize
    for (int i = 0 ; i < n ; i++) {
        int input;
        cout << "Enter item " << i+1 << ": ";
        cin >> input;
        sum += input;
    }
    cout << "Sum is: " << sum << endl;
    
    return 0;
}