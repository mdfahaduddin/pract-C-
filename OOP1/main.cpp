#include <iostream>

using namespace std;

class Home {
public:
    double length;
    double height;
    double breadth;

    double calculateArea(){
        return length * breadth;
    }

    double calculateVolume(){
        return length * height * breadth;
    }
};

int main()
{
    Home room1,room2;

    room1.length = 4;
    room1.breadth = 5;
    room1.height = 3;

     room2.length = 5;
    room2.breadth = 5;
    room2.height = 7;

    cout << "Area of room  = "<< room1.calculateArea() << endl;

    cout << "Volume of room = "<<room2.calculateVolume()<<endl;

    return 0;
}
