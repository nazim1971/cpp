// Write a C++ program that shows the concept of an object in a function and returns an object?

#include <iostream>
using namespace std;

// Class definition
class Rectangle {
public:
    float length;
    float width;

    // Member function to calculate area
    float area() {
        return length * width;
    }
};

// Function that takes a Rectangle object by value
float calculateArea(Rectangle r) {
    return r.area();
}

int main() {
    // Create a Rectangle object and initialize values directly
    Rectangle rect1;
    rect1.length = 5.0;
    rect1.width = 3.0;

    // Call function to calculate area (by value)
    cout << "Area: " << calculateArea(rect1) << endl;

    return 0;
}
