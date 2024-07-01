/**
 * file: class4.cpp
 * Basic class - Desctructor
 * Date: 01-07-2024
 * Author: Teeradon C.
 */

#include<iostream>
using namespace std;

class Gambit {
private:
    /* data */
public:
    Gambit() {
        cout << "Hello there, I'm in constructor" << endl;
    }
    ~Gambit() {
        cout << "Hello there, I'm in destructor" << endl;
    }
    void display() {
        cout << "Hello! " << endl;
    }
};

int main() {
    Gambit gam;
    gam.display();

    return 0; // After return 0; the scope of obj gam is ended and the destruction of obj gam will be called.
}