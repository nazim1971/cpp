#include <iostream>
using namespace std;

class Rectangle {
private:
    int width, height;

public:
    // Member function to set the dimensions of the rectangle
    void setDimensions(int w, int h) {
        width = w;
        height = h;
    }

    // Member function to calculate and return the area
    int area() {
        return width * height;
    }
};

int main() {
    Rectangle rect;  // Create a Rectangle object
    rect.setDimensions(5, 10);  // Set dimensions using a member function
    cout << "Area of rectangle: " << rect.area() << endl;  // Call another member function
    return 0;
}


