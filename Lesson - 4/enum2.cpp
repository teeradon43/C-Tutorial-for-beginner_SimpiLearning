/**
 * file: enum2.cpp
 * Enumeration - 2
 * Date: 01-07-2024
 * Author: Teeradon C.
 */

#include<iostream>
using namespace std;

int main() {
    enum color{ red, blue, green, yellow };
    color select = yellow;

    switch(select){
        case red:
            cout << "It's red" << endl;
            break;
        case blue:
            cout << "It's blue" << endl;
            break;
        case green:
            cout << "It's green" << endl;
            break;
        case yellow:
            cout << "It's yellow" << endl;
            break;
    }

    return 0;
}