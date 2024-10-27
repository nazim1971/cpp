#include <iostream>
using namespace std;

class ProtectedExample {
protected:
    int protectedVar;  // Protected member

public:
    void setProtectedVar(int value) {
        protectedVar = value;
    }
};

class DerivedExample : public ProtectedExample {
public:
    void display() {
        cout << "Protected Variable in Derived Class: " << protectedVar << endl;  // Accessing protected member in derived class
    }
};

int main() {
    DerivedExample obj;
    // obj.protectedVar = 10;  // Error: Cannot access protected member directly
    obj.setProtectedVar(10);  // Access through public function
    obj.display();  // Displaying protected member in derived class
    return 0;
}

