#include<iostream>

using namespace std;

class students{
public :
    int id;
    string phnNo;
    double cgpa;

};

int main(){
    students fahad,abir; //create object fahad
    fahad.id = 2110317006;
    fahad.phnNo = "01609671003";
    fahad.cgpa = 3.99;

    abir.id = 2110318006;
    abir.phnNo = "0160000000";
    abir.cgpa = 4;

   cout<<"ID : "<<fahad.id<<endl;
   cout<<"Phone Number : "<<fahad.phnNo<<endl;
   cout<<"CGPA : "<<fahad.cgpa<<endl;

   cout<<"ID : "<<abir.id<<endl;
   cout<<"Phone Number : "<<abir.phnNo<<endl;
   cout<<"CGPA : "<<abir.cgpa<<endl;
}
