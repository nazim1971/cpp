#include <iostream>
using namespace std;

class Example {
private:
    int value;

public:
    // Constructor
    Example(int v) : value(v) {
        cout << "Constructor called with value: " << value << endl;
    }

    // Copy constructor
    Example(const Example &obj) {
        value = obj.value;
        cout << "Copy constructor called, copied value: " << value << endl;
    }

    void display() {
        cout << "Value is: " << value << endl;
    }
};

int main() {
    Example obj1(20); // Constructor
    Example obj2 = obj1; // Copy constructor
    obj2.display();
    return 0;
}
