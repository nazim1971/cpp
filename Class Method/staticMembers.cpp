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