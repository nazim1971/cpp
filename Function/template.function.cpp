#include <iostream>
using namespace std;

// Template function to find the maximum of two values
template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Max of 5 and 10: " << findMax(5, 10) << endl;
    cout << "Max of 3.5 and 2.1: " << findMax(3.5, 2.1) << endl;
    return 0;
}
