#include <iostream>
using namespace std;

int main() {
    string name, country;
    int age, wordCount = 1;

    try {
        // Input for name
        cout << "Enter name (1-3 words): ";
        getline(cin, name);

        // Count spaces to determine the number of words in the name
        for (char ch : name) {
            if (isspace(ch)) wordCount++;
        }

        // Validate word count
        if (wordCount < 1 || wordCount > 3) {
            throw runtime_error("Invalid Name. Must be 1-3 words.");
        }

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
