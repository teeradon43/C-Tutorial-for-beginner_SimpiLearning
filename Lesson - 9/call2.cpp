/**
 * file: call2.cpp
 * Call by Value & Reference Tutorial - 2
 * Date: 07-07-2024
 * Author: Teeradon C.
 */

#include<iostream>
#include<vector>
using namespace std;

void Increment(int &salary) {
    salary += 5000; //*salary += 5000; in C.
    cout << "Salary inside function: " << salary << endl;
}

int main() {
    int salary = 27000;
    Increment(salary);
    cout << "Salary inside main: " << salary << endl;
    return 0;
}