/**
 * file: pointer3.cpp
 * Pointer Tutorial - 3
 * Date: 08-07-2024
 * Author: Teeradon C.
 */

#include<iostream>
using namespace std;

int main() {
    int *ptr;
    int array[] = { 5, 17, 20, 7, 9, 4, 6 };
    ptr = array;

    for (int i = 0 ; i < 7 ; i++) {
        cout << *ptr << " ";
        ptr++;
    }
    return 0;
}