#include <iostream>
using namespace std;

// Function that uses pointers to modify the value
void modifyValue(int *x) {
    *x = 10; // Modify the value at the pointer's address
}

int main() {
    int num = 5;
    modifyValue(&num); // Pass the address of the variable
    cout << "Modified value: " << num << endl; // Value is changed
    return 0;
}
