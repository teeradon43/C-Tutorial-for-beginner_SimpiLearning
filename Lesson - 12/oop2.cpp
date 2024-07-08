/**
 * file: oop2.cpp
 * Object Oriented Programming Tutorial - Polymorphism
 * Date: 09-07-2024
 * Author: Teeradon C.
 */

#include<iostream>
using namespace std;

class Animal {
    public:
        void speed() {
            cout << "Who is more faster ?\n";
        }
};

class Cheetah: public Animal {
    public:
        void speed() {
            cout << "I'm faster on the ground.\n";
        }
};


class Dolphin: public Animal {
    public:
        void speed() {
            cout << "I'm faster in water.\n";
        }
};

int main() {
    Animal a;
    Cheetah c;
    Dolphin d;

    a.speed();
    c.speed();
    d.speed();
}