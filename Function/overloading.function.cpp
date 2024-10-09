#include <iostream>
using namespace std;

// Overloaded functions
int add(int a, int b) {
    return a + b; // Adds two integers
}

double add(double a, double b) {
    return a + b; // Adds two doubles
}

int main() {
    cout << "Sum of integers: " << add(10, 20) << endl;
    cout << "Sum of doubles: " << add(10.5, 20.5) << endl;
    return 0;
}
