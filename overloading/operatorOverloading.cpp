#include <iostream>
using namespace std;

class Point {
public:
    int x, y;

    // Constructor to initialize the point
    Point(int a, int b) : x(a), y(b) {}

    // Overloading the + operator to add two Point objects
    Point operator + (const Point& other) {
        return Point(x + other.x, y + other.y);
    }

    // Display function to show the coordinates
    void display() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p1(2, 3), p2(4, 5);   // Create two points
    Point p3 = p1 + p2;         // Add the points using overloaded + operator
    p3.display();               // Output: (6, 8)

    return 0;
}
