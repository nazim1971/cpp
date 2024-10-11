#include <iostream>
using namespace std;

class Example {
private:
    int value;

public:
    // Constructor: Called when an object is created
    Example(int v) {
        value = v;
        cout << "Constructor called with value: " << value << endl;
    }

    // Destructor: Called when an object goes out of scope or is deleted
    ~Example() {
        cout << "Destructor called for value: " << value << endl;
    }

    // A simple method to display the value
    void display() {
        cout << "Value is: " << value << endl;
    }
};

int main() {
    Example obj(10); // Constructor is called
    obj.display();   // Method call
    // Destructor will be called automatically when obj goes out of scope
    return 0;
}
