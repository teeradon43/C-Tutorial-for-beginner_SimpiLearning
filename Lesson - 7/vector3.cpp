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
    vector<int> testVector;
    for (int i = 1 ; i <= 10 ; i++) {
        testVector.push_back(i);
    }
    cout << "Vector Size | Vector Capacity | Maximum Size" << endl;
    cout << testVector.size() << " | " << testVector.capacity() << " | " << testVector.max_size() << endl;

    testVector.resize(5);
    cout << endl << "Resizing to 5" << endl;

    cout << "Vector Size | Vector Capacity | Maximum Size" << endl;
    cout << testVector.size() << " | " << testVector.capacity() << " | " << testVector.max_size() << endl;
    
    testVector.assign(17, 9);
    cout << "Assinging 17 elements" << endl;

    cout << "Vector Size | Vector Capacity | Maximum Size" << endl;
    cout << testVector.size() << " | " << testVector.capacity() << " | " << testVector.max_size() << endl;
    
    testVector.assign(100, 9);
    cout << "Assinging 100 elements" << endl;

    cout << "Vector Size | Vector Capacity | Maximum Size" << endl;
    cout << testVector.size() << " | " << testVector.capacity() << " | " << testVector.max_size() << endl;
    
    testVector.clear();
    cout << "Clearing vector" << endl;

    cout << "Vector Size | Vector Capacity | Maximum Size" << endl;
    cout << testVector.size() << " | " << testVector.capacity() << " | " << testVector.max_size() << endl;
    return 0;
}