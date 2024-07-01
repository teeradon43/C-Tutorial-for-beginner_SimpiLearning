/**
 * file: basic2.cpp
 * Simple function usage
 * Date 01-07-2024
 * Author: Teeradon C.
 */

#include<iostream>
using namespace std;

void printFunction() {
    int i = 1;
    while(i<=20) {
        cout << i << " ";
        i++;
    }
}

int main() {
    printFunction();
}