// Problem -3: Write a program to demonstrate the use of virtual functions in a base class and how they are overridden in a derived class

#include <iostream>
using namespace std;

// Base class
class Base {
public:
    // Virtual function
    virtual void show() {
        cout << "Base class method." << endl;
    }
};
