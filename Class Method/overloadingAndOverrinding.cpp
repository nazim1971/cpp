#include <iostream>
using namespace std;

class Base {
public:
    // Overloading a function with different signatures
    void show(int x) {
        cout << "Base class: Showing integer " << x << endl;
    }

    void show(double x) {
        cout << "Base class: Showing double " << x << endl;
    }

    // Virtual function to be overridden
    virtual void display() {
        cout << "Base class display function" << endl;
    }
};

class Derived : public Base {
public:
    // Overriding the base class function
    void display() override {
        cout << "Derived class display function" << endl;
    }
};

int main() {
    Base baseObj;
    Derived derivedObj;

    // Function overloading
    baseObj.show(5);
    baseObj.show(5.5);

    // Function overriding
    Base *basePtr = &derivedObj;
    basePtr->display(); // Calls Derived class function due to virtual function
    return 0;
}
