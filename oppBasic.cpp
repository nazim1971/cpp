#include <iostream>
using namespace std ;

class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};

int main ()
{
    MyClass obj;  // Create an object of MyClass

     // Access attributes and set values
  obj.myNum = 36;
  obj.myString = "My roll number is ";

  cout << obj.myString <<  obj.myNum;
  return 0;

}
