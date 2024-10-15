// Write a C++ program to demonstrate function overloading with the following functionalities:
// Addition of two integers: The function should take two integer arguments and return their sum.
// Multiplication of two floating-point numbers: The function should take two float arguments and return their product.
// Subtraction of an integer from a float: The function should take a float and an int argument and return their difference (float - int).

#include <iostream>
using namespace std;

// Function for summation of integers
int calculate(int a, int b) {
    return a + b;
}

// Function for multiplication of floats
float calculate(float a, float b) {
    return a * b;
}

// Function for subtraction of a float and an integer
float calculate(float a, int b) {
    return a - b;
}

int main() {
    int int1 = 5, int2 = 10;
    float float1 = 4.5, float2 = 2.3;

    // Calling the summation of integers
    cout << "Summation of integers: " << calculate(int1, int2) << endl;

    // Calling the multiplication of floats
    cout << "Multiplication of floats: " << calculate(float1, float2) << endl;

    // Calling the subtraction of float and integer
    cout << "Subtraction of float and integer: " << calculate(float1, int1) << endl;

    return 0;
}

