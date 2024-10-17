#include <iostream>
using namespace std;

// Base class
class Vehicle {
public:
    void start() {
        cout << "Vehicle started" << endl;
    }
};

// Derived class with public inheritance
class Car : public Vehicle {
public:
    void honk() {
        cout << "Car horn!" << endl;
    }
};

int main() {
    Car myCar;
    myCar.start(); // Inherited from Vehicle class
    myCar.honk();  // Specific to Car class
    return 0;
}
