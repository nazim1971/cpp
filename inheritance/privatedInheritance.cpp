#include <iostream>
using namespace std;

// Base class
class Base {
public:
    int x; // Public member
protected:
    int y; // Protected member
};

// Derived class inheriting from Base (private inheritance)
class Derived : private Base {
public:
    void display() {
        cout << "Public member x: " << x << endl;   // Accessible (private in Derived)
        cout << "Protected member y: " << y << endl; // Accessible (private in Derived)
    }
};

int main() {
    Derived obj;
    // Cannot access obj.x and obj.y directly because they are now private in Derived
    obj.display(); // Calling display function to print x and y

    return 0;
}

