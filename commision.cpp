#include<iostream>

using namespace std;

int main(){
    double sal,product;
string name;
cout<<"Enter user name :";
cin>>name;
    cout<<"Enter salary : ";

    cin>>sal;

    cout<<"Enter saled product : ";
    cin>>product;

    int t = sal+(product*15)/100;
    cout<<"Employee name :"<<name;
    cout<<"\nTotal sal :"<<t;




}
