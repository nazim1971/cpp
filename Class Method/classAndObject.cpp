#include <iostream>
using namespace std;

// Define a class named 'Car'
class Car {
public:
    string brand;  // Attribute to store the car brand
    string model;  // Attribute to store the car model
    int year;      // Attribute to store the year of manufacture

    // Method to display car details
    void displayDetails() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    // Create an object of the Car class
    Car myCar ;

    // Set attributes of the object
    myCar.brand = "Toyota";
    myCar.model = "Camry";
    myCar.year = 2022;

    // Call the method to display car details
    myCar.displayDetails();

    return 0;
}

