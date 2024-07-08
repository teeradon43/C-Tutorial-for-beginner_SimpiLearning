/**
 * file: oop3.cpp
 * Object Oriented Programming Tutorial - Abstraction
 * Date: 09-07-2024
 * Author: Teeradon C.
 */

#include<iostream>
using namespace std;

class Tradefair {
    private:
        int coupon;
    
    public:
        void setCoupon (int c) {
            coupon = c;
        }
        int getCoupon () {
            return coupon;
        }
};

int main() {
    Tradefair t;
    t.setCoupon(50);
    cout << "The coupon is " << t.getCoupon();
    return 0;
}