#include <iostream>
using namespace std;

// Base class
class Base {
public:
    int x; // Public member
protected:
    int y; // Protected member
};

// Derived class inheriting from Base (protected inheritance)
class Derived : protected Base {
public:
    void display() {
        cout << "Public member x: " << x << endl;   // Accessible (protected in Derived)
        cout << "Protected member y: " << y << endl; // Accessible (protected in Derived)
    }
};

int main() {
    Derived obj;
    // Cannot access obj.x and obj.y directly because they are now protected in Derived
    obj.display(); // Calling display function to print x and y

    return 0;
}
