#include <iostream>
using namespace std;

// Base class
class A {
public:
    A() {
        cout << "Constructor of A\n";
    }
    void show() {
        cout << "Base class A function\n";
    }
};

// Derived classes B and C, using virtual inheritance
class B : virtual public A {
public:
    B() {
        cout << "Constructor of B\n";
    }
};

class C : virtual public A {
public:
    C() {
        cout << "Constructor of C\n";
    }
};

// Derived class D inherits from both B and C
class D : public B, public C {
public:
    D() {
        cout << "Constructor of D\n";
    }
};

int main() {
    D obj;   // Only one instance of A is created
    obj.show();  // Accessing the base class function
    return 0;
}
