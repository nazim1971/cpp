#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "This animal eats food." << endl;
    }
};

// Derived class 1
class Dog : public Animal {
public:
    void bark() {
        cout << "The dog barks." << endl;
    }
};

// Derived class 2
class Cat : public Animal {
public:
    void meow() {
        cout << "The cat meows." << endl;
    }
};

int main() {
    Dog myDog;
    Cat myCat;

    // Dog inherits from Animal
    myDog.eat();  // Base class method
    myDog.bark(); // Derived class method

    // Cat inherits from Animal
    myCat.eat();  // Base class method
    myCat.meow(); // Derived class method

    return 0;
}
