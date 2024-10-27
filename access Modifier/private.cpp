#include <iostream>
using namespace std;

class PrivateExample {
private:
    int privateVar;  // Private member

public:
    // Public member function to access private member
    void setPrivateVar(int value) {
        privateVar = value;
    }

    void display() {
        cout << "Private Variable: " << privateVar << endl;
    }
};

int main() {
    PrivateExample obj;
    // obj.privateVar = 10;  // Error: Cannot access private member directly
    obj.setPrivateVar(10);  // Accessing private member through a public function
    obj.display();  // Displaying private member through a public function
    return 0;
}

