#include "students.h"
#include<iostream>

using namespace std;

students::students()
{
    cout<<"\nconstructor called"<<endl;
}
students::~students()
{
    cout<<"\ndestructor called"<<endl;
}
void students::display(){
cout<<"\nInsiede display function"<<endl;
}
