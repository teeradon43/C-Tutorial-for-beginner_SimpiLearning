/**
 * file: pointer2.cpp
 * Pointer Tutorial - 2
 * Date: 08-07-2024
 * Author: Teeradon C.
 */

#include<iostream>
using namespace std;

int main() {
    int num1, num2;
    int sum, sub = 0;
    int *ptr1, *ptr2;

    cout << "Enter 2 numbers: ";
    cin >> num1 >> num2;

    ptr1 = &num1;
    ptr2 = &num2;

    (*ptr1)++;
    (*ptr2)++;

    cout << "*ptr1: " << *ptr1 << endl;
    cout << "*ptr2: " << *ptr2 << endl;

    sum = *ptr1 + *ptr2;
    cout << "Addition: " << sum << endl;

    
    (*ptr1)--;
    (*ptr2)--;

    sub = *ptr1 - *ptr2;
    cout << "Subtraction: " << sub << endl;

    return 0;
      
}