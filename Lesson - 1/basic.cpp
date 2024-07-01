/**
 * file: basic.cpp
 * Basic if else & Loop usage
 * Date: 01-07-2024
 * Author: Teeradon C.
 */

#include<iostream>
using namespace std;

int main() {
    int arr[] = {1,2,7,12,9};
    int even=0;
    int odd=0;

    int length = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < length ; i++) {
        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    cout << "Number of odd/even numbers = " << odd << ", " << even;
    return 0;
}