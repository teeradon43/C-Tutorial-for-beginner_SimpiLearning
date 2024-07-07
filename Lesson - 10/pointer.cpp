/**
 * file: pointer.cpp
 * Pointer Tutorial - 1
 * Date: 08-07-2024
 * Author: Teeradon C.
 */

#include<iostream>
using namespace std;

int main() {
    int value = 105;
    int *ptr;

    ptr = &value;

    cout << "Value of var is: " << value << endl;
    cout << "Value of ptr is: " << ptr << endl;
    cout << "Value of *ptr is: " << *ptr << endl;
}