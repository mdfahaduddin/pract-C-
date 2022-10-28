#include<iostream>

using namespace std;

class students{
public :
    int id;
    string phnNo;
    double cgpa;

    //param function create for input data
   // void input(int i,string p, double c){
  //  id = i;
   // phnNo = p;
  //  cgpa = c;
  //  }

  //created a constructor exact same name of class
  students(int i,string p, double c){
    id = i;
    phnNo = p;
    cgpa = c;
  }

  students(){
  cout<<"\nDefault constructor\n\n";
  }

  // in above we can see two constructor one is parameterized and another is default now , we can say it's constructor overloading


    //function create for display
    void display(){
    cout<<"ID : "<<id<<endl;
    cout<<"Phone Number : "<<phnNo<<endl;
    cout<<"CGPA : "<<cgpa<<endl;
    }

};

int main(){
    students fahad(2110317006,"01609671003",3.99),abir(2110318006,"016000000",4.00),rubel; //create object fahad

   // fahad.input(2110317006,"01609671003",3.99);//call input function
    fahad.display();

  //  abir.input(2110318006,"016000000",4.00);//call display function
    abir.display();


}
