#include <iostream>
using namespace std;

// Define a class named 'Person'
class Person {
private:
    string name;  // Private attribute

public:
    // Constructor to initialize the name
    Person(string n) {
        name = n;
    }

    // Public method to get the name
    string getName() {
        return name;
    }

    // Public method to set the name
    void setName(string n) {
        name = n;
    }
};

int main() {
    // Create a Person object
    Person person("Alice");

    // Access and display the name using the getter method
    cout << "Name: " << person.getName() << endl;

    // Modify the name using the setter method
    person.setName("Bob");
    // Display the updated name
    cout << "Updated Name: " << person.getName() << endl;
    return 0;
}

