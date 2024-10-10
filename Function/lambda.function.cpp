#include <iostream>
using namespace std;

int main() {
    // Lambda function to add two numbers
    auto add = [](int a, int b) -> int {
        return a + b;
    };

    cout << "Sum using lambda: " << add(5, 10) << endl;
    return 0;
}
