// Write a C++ program that takes the user's name (1-3 words), country (only "Bangladesh"), and age (30 or above). Use exception handling to validate the inputs and throw appropriate error messages if any condition is violated.

#include <iostream>
using namespace std;

int main() {
    string name, country;
    int age, wordCount = 1;

    try {
        // Input for name
        cout << "Enter name (1-3 words): ";
        getline(cin, name);

       

        // Input for country
        cout << "Enter country (Bangladesh only): ";
        getline(cin, country);
        if (country != "Bangladesh") {
            throw runtime_error("Invalid Country. Only Bangladesh is accepted.");
        }

        // Input for age
        cout << "Enter age (30 or above): ";
        cin >> age;
        if (age < 30) {
            throw runtime_error("Invalid Age. Must be 30 or older.");
        }

        // Output valid input
        cout << "\n\n Valid Input. \n\nName: " << name << ",\nCountry: " << country << ",\nAge: " << age << endl;
    }
    catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
