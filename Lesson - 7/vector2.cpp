/**
 * file: vector2.cpp
 * Vector Tutorial - 2
 * Date: 03-07-2024
 * Author: Teeradon C.
 */

#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> num;

    for (int i = 1 ; i <= 5 ; i++) {
        num.push_back(i);
    }
    cout << "Output: ";

    for (auto a = num.begin() ; a != num.end() ; a++) {
        cout << *a << " ";
    }

    return 0;
}