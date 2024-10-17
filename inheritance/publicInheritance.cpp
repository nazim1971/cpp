#include <iostream>
using namespace std;

// Base class
class Base {
public:
    int x; // Public member
protected:
    int y; // Protected member
};

// Derived class inheriting from Base
class Derived : public Base {
public:
    void display() {
        cout << "Public member x: " << x << endl;   // Accessible (public in Derived)
        cout << "Protected member y: " << y << endl; // Accessible (protected in Derived)
    }
};

int main() {
    Derived obj;
    obj.x = 10;   // Accessing public member x
    obj.y = 20;   // Accessing protected member y

    obj.display(); // Display function will print x and y

    return 0;
}
