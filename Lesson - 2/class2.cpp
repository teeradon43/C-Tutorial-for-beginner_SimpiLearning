/**
 * file: class2.cpp
 * Basic class 2 - set private var through public function
 * Date: 01-07-2024
 * Author: Teeradon C.
 */

#include <iostream>
using namespace std;

class Billboard {
    private:
    string title;

    public:
    void setTitle(string title) {
        this->title = title;
    }
    string getTitle() {
        return this->title;
    }
};

int main() {
    Billboard billboard;
    billboard.setTitle("Top 10 songs of 2020");
    cout << "The bill board title is: " << billboard.getTitle();

    return 0;
}