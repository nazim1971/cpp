// Problem-4: Create a program that uses multiple inheritance, where two base classes have methods with the same name, and demonstrate how ambiguity can be resolved.

#include <iostream>
using namespace std;

// Base class 1
class Base1 {
public:
    void show() {
        cout << "Base1 class method." << endl;
    }
};

// Base class 2
class Base2 {
public:
    void show() {
        cout << "Base2 class method." << endl;
    }
};

// Derived class inheriting from both Base1 and Base2
class Derived : public Base1, public Base2 {
public:
    // Resolving ambiguity by specifying which base class method to call
    void showBase() {
        Base1::show(); // Call Base1's show method
        Base2::show(); // Call Base2's show method
    }
};

int main() {
    // Create an object of Derived class
    Derived obj;

    // Call the methods from both base classes explicitly
    obj.showBase();  // Calls Base1's and Base2's show()
    
    return 0;
}
