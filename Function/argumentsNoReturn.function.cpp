
#include <iostream>
using namespace std;

// Function that takes two arguments but returns nothing
void displaySum(int a, int b) {
    cout << "The sum is: " << (a + b) << endl;
}

int main() {
    displaySum(5, 10); // Passing values to the function
    return 0;
}