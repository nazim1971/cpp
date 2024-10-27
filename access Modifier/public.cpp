#include <iostream>
using namespace std;

class PublicExample {
public:
    int publicVar;  // Public member

    void display() {
        cout << "Public Variable: " << publicVar << endl;
    }
};

int main() {
    PublicExample obj;
    obj.publicVar = 10;  // Directly accessing public member
    obj.display();  // Calling public member function
    return 0;
}


