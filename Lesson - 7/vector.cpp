/**
 * file: vector.cpp
 * Vector Tutorial
 * Date: 03-07-2024
 * Author: Teeradon C.
 */

#include<iostream>
#include<vector>
using namespace std;

void printout_element(vector<int> vector) {
    int vectorSize = vector.size();
    cout << "The contents are: ";
    for (int i = 0 ; i < vectorSize ; i++) {
        cout << vector[i] << " ";
    }
    cout << endl;
    return;
}

int main() {
    vector<int> n;
    
    n.assign(4, 1);
    cout << "Assigning vector" << endl;
    printout_element(n);

    n.push_back(2);
    cout << "Push_back vector" << endl;
    int numberOfElements = n.size();
    cout << "Last element: " << n[numberOfElements-1] << endl;
    printout_element(n);

    n.pop_back();
    cout << "Pop_back vector" << endl;
    numberOfElements = n.size();
    cout << "Last element: " << n[numberOfElements-1] << endl;
    printout_element(n);

    n.insert(n.begin(), 7);
    cout << "Insert vector" << endl;
    cout << "First element: " << n[0] << endl;
    printout_element(n);

    n.clear();
    cout << "Clear vector" << endl;
    cout << "Vector size: " << n.size() << endl;
    printout_element(n);

    return 0;
}
