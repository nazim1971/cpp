#include <iostream>
using namespace std;

class Example {
private:
    int value;

public:
    // Constructor
    Example(int v) : value(v) {}

    // Friend function declaration
    friend void display(const Example &obj);
};

// Friend function definition
void display(const Example &obj) {
    // Can access private members
    cout << "Value is: " << obj.value << endl;
}

int main() {
    Example obj(42);
    display(obj); // Friend function call
    return 0;
}
