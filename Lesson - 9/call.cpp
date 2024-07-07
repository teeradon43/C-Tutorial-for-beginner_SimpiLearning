/**
 * file: call.cpp
 * Call by Value & Reference Tutorial
 * Date: 07-07-2024
 * Author: Teeradon C.
 */

#include<iostream>
#include<vector>
using namespace std;

void SalaryChange(int salary) {
    salary = 30000;
    cout << "Value inside function: " << salary << endl;
    return;
}

int main() {
    int salary = 27000;
    SalaryChange(salary);
    cout << "Value inside main: " << salary << endl;
    return 0;
}