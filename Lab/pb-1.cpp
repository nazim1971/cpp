// Problem-1:  Write a C++ program to demonstrate single inheritance where the base class has a method showBase() and the derived class adds another method showDerived().

#include <iostream>
using namespace std;

// Base class
class Base {
public:
    void showBase() {
        cout << "This is the base class." << endl;
    }
};

// Derived class inheriting from Base
class Derived: public Base {
public:
    void showDerived() {
        cout << "This is the derived class." << endl;
    }
};

int main() {
    // Create an object of the derived class
    Derived obj;
    // Call the base class method using the derived class object
    obj.showBase();
    // Call the derived class method
    obj.showDerived();

    return 0;
}
