/**
 * file: enum.cpp
 * Enumeration
 * Date: 01-07-2024
 * Author: Teeradon C.
 */

#include<iostream>
using namespace std;

enum captain { Avi, Sid, Robby, Sami, Jake };

int main() {
    captain cap = Avi;
    if (cap == Avi) {
        cout << "Our captain is Avi and it's value is " << Avi << endl;
    } else {
        cout << "He is not our captain";
    }

    return 0;
}