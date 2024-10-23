// Problem 2: Create a program with a base class that has protected and private members. Show how the derived class can access the protected member but not the private member

#include <iostream>
using namespace std;

class Base {
protected:
    int protectedMember = 10;
private:
    int privateMember = 20;
};

class Derived : public Base {
public:
    void showProtected() {
        cout << "Protected Member: " << protectedMember << endl;
        // Cannot access privateMember
        // cout << "Private Member: " << privateMember << endl; // Error
    }
};

int main() {
    Derived obj;
    obj.showProtected();
    return 0;
}
