#include<iostream>

using namespace std;

class students{
public :
    int id;
    string phnNo;
    double cgpa;

    //function create for display
    void display(){
    cout<<"ID : "<<id<<endl;
    cout<<"Phone Number : "<<phnNo<<endl;
    cout<<"CGPA : "<<cgpa<<endl;
    }

};

int main(){
    students fahad,abir; //create object fahad
    fahad.id = 2110317006;
    fahad.phnNo = "01609671003";
    fahad.cgpa = 3.99;
    fahad.display();

    abir.id = 2110318006;
    abir.phnNo = "0160000000";
    abir.cgpa = 4;
    fahad.display();


}
