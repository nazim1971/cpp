#include <iostream>
using namespace std;

void func(int a) {
    cout << "Integer function: " << a << endl;
}

void func(float a) {
    cout << "Float function: " << a << endl;
}

int main() {
    func(5.0);  // Ambiguity here
    return 0;
}
