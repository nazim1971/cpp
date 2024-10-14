//  How can you use function overloading in C++ to evaluate the conditions (a > b), (a > 0), and (a % 2) using different parameter sets?

#include <iostream>
using namespace std;

// Function to check if a is greater than b
bool compare(int a, int b) {
    return a > b;
}

// Function to check if a is greater than 0
bool compare(int a) {
    return a > 0;
}

// Function to check if a is odd (a % 2 != 0)
bool compare() {
    int a = 4;
    if (a % 2 == 0) {
        cout << "Number is Even" << endl;
    } else {
        cout << "Number is Odd" << endl;
    }
    return true;
}

int main() {
    int a = 5;
    int b = 8;

    // Check if a > b
    if (compare(a, b)) {
        cout << "a is greater than b" << endl;
    } else {
        cout << "a is not greater than b" << endl;
    }

  
    // Check if a is odd
    compare(); // You had missed a semicolon here

    return 0;
}
