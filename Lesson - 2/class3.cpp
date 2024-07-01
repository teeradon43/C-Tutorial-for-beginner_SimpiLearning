/**
 * file: class3.cpp
 * Basic class 3 - Contructor
 * Date: 01-07-2024
 * Author: Teeradon C.
 */

#include<iostream>
using namespace std;

class Billboard
{
private:
    string title;
public:
    Billboard(string title) {
        setTitle(title);
    }
    ~Billboard() {}

    void setTitle(string title){
        this->title = title;
    }

    string getTitle() {
        return this->title;
    }
};

int main()
{
    Billboard billboard("Top 3 songs of 2020");
    cout << "Billboard's title: " << billboard.getTitle() << endl;
    
    return 0;
}
