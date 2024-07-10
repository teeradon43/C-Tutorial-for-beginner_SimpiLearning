/**
 * file: sorting.cpp
 * Sorting algorithm
 * Date: 10-07-2024
 * Author: Teeradon C.
 */

#include <iostream>
#include <algorithm>

/**
 * For small projects, or quickscripts, `using namespace std;` can make the code more concise and easier to write.
 * For professional settings or larger projects, it's usually better to avaoid `using namespace std;` to prevent potential issues with namespace pollution and improve code clarity. 
 */

int main() {
    int numbers[10];
    std::cout << "Enter 10 numbers: ";
    for (int i = 0 ; i < 10 ; i++) {
        std::cin >> numbers[i];
    }

    std::sort(std::begin(numbers), std::end(numbers));
    
    std::cout << "Ascending orders: ";
    for (int i = 0 ; i < 10 ; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    std::sort(std::begin(numbers), std::end(numbers), std::greater<int>());
    std::cout << "Descending orders: ";
    for (int i = 0 ; i < 10 ; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}