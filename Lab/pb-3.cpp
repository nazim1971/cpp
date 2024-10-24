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

// Derived class
class Derived : public Base {
public:
    // Overriding the base class function
    void show() override {
        cout << "Derived class method." << endl;
    }
};

int main() {
    // Base class pointer
    Base* ptr;

    // Derived class object
    Derived d;

    // Pointing base class pointer to derived class object
    ptr = &d;

    // Calling the function
    ptr->show();  // Calls Derived class method

    return 0;
}
