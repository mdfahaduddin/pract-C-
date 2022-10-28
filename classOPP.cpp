#include<iostream>

using namespace std;

class students{
public :
    int id;
    string phnNo;
    double cgpa;

};

int main(){
    students fahad;
    fahad.id = 2110317006;
    fahad.phnNo = "01609671003";
    fahad.cgpa = 3.99;

   cout<<"ID : "<<fahad.id<<endl;
   cout<<"Phone Number : "<<fahad.phnNo<<endl;
   cout<<"CGPA : "<<fahad.cgpa<<endl;
}
