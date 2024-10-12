#include <iostream>
using namespace std;

class Counter {
private:
    static int count; // Static variable

public:
    // Constructor to increment count
    Counter() {
        count++;
    }

    // Static method to get the value of count
    static int getCount() {
        return count;
    }
};

// Initialize static member variable
int Counter::count = 0;

int main() {
    Counter c1, c2, c3;
    cout << "Number of objects created: " << Counter::getCount() << endl;
    return 0;
}
