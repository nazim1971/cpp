// Problem-5 : Write a function template to calculate the maximum of two numbers of any type (int, float, etc.).

#include <iostream>
using namespace std;

// Function template to calculate the maximum of two numbers
template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Max of 3 and 5: " << findMax(3, 5) << endl;
    cout << "Max of 3.5 and 2.7: " << findMax(3.5, 2.7) << endl;
    return 0;
}
