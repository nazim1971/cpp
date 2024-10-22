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
