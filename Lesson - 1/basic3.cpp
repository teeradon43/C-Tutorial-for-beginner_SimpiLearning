/**
 * file: basic3.cpp
 * Simple string operation
 * Date: 01-07-2024
 * Author: Teeradon C.
 */

#include<iostream>
using namespace std;

int main() {
    string s;

    cout << "Enter a string: ";

    getline(cin, s);

    cout << "You have entered: " << s << endl;

    s.push_back('Y');
    cout << "After using push_back('Y'): " << s <<endl;

    s.pop_back();
    cout << "After using pop_back(): " << s << endl;

    return 0;
}
