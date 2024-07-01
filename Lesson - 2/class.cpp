/**
 * file: class.cpp
 * Basic class
 * Date: 01-07-2024
 * Author: Teeradon C.
 */

#include<iostream>
using namespace std;

class Franchise {
    public: 
    void KFC() {
        cout << "We have the best chicken" << endl;
    }
    void BurgerKing() {
        cout << "We have the best burgers" << endl;
    }
};

int main() {
    Franchise franchise;
    franchise.KFC();
    franchise.BurgerKing();

    return 0;
}