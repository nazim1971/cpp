#include <iostream>
using namespace std ;

class Rec
{
    public:
    int width = 20;
    int height = 10;
    int area;
};

int main ()
{
    Rec obj;

    obj.area = obj.height * obj.width;

    cout<<"Area = "<< obj.area;
    return 0;
}
