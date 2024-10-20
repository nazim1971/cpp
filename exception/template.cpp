// Write a code find the max value between two number.
#include <iostream>
using namespace std;

// Class template to find the maximum of two values
template <typename T>
class MaxFinder {
public:
    // Function to return maximum value
    T getMax(T a, T b) {
        return (a > b) ? a : b;
    }
};

int main() {
    // Using MaxFinder class for integers
    MaxFinder<int> intMax;
    cout << "Max of 10 and 20: " << intMax.getMax(10, 20) << endl;

    return 0;
}
