#include <iostream>
using namespace std;

class Rectangle {
public:
    int width, height;

    // Default constructor (no parameters)
    Rectangle() {
        width = 0;
        height = 0;
    }

    // Constructor with one parameter (square case)
    Rectangle(int side) {
        width = side;
        height = side;
    }

    // Constructor with two parameters (rectangle case)
    Rectangle(int w, int h) {
        width = w;
        height = h;
    }

    // Function to calculate and display the area
    void displayArea() {
        cout << "Area: " << width * height << endl;
    }
};

int main() {      // Calls the default constructor
    Rectangle rect2(5);    // Calls the constructor with one parameter
    Rectangle rect3(4, 6); // Calls the constructor with two parameters

    rect1.displayArea();   // Output: Area: 0
    rect2.displayArea();   // Output: Area: 25
    rect3.displayArea();   // Output: Area: 24

    return 0;
}
