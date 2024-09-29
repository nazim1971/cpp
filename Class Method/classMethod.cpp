#include <iostream>
using namespace std ;

// inside Example
class MyClass
{      // The class
public:           // Access specifier
    void myMethod () {  // Method/function defined inside the class
    cout<< "Define a function inside class defination\n";
    }
};


//outside Example
class Outside
{
public:
    void outMethod () ; // Method/function declaration
};

void Outside::outMethod(){
 cout << "Define a function outside of class defination ";
}

int main()
{
    MyClass myObj; // Create an object of MyClass
    Outside outObj; // Create an object of Outside
    myObj.myMethod(); // Call the method
    outObj.outMethod(); // Call the method
    return 0;
}
