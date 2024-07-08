/**
 * file: oop.cpp
 * Object Oriented Programming Tutorial - Inheritance
 * Date: 09-07-2024
 * Author: Teeradon C.
 */

#include<iostream>
using namespace std;

class Parent {
    public:
        string name1 = "Harley";    
};

class Child: public Parent {
    public:
        string name2 = "Davidson";
};

int main() {
    Child child;
    cout << child.name1 + " " + child.name2 << endl;
    return 0;
}