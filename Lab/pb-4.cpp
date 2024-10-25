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
