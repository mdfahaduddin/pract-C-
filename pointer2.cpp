#include<iostream>
#include<conio.h>

using namespace std;

void sum(double n1, double n2){

    double A = n1, B = n2;

    double *p1,*p2;

     p1 = &A;
     p2 = &B;

     double sum = *p1 + *p2;

     cout<<"\n Sum = "<<sum;
}
void sub(double n1, double n2){

    double A = n1, B = n2;

    double *p1,*p2;

     p1 = &A;
     p2 = &B;

     double sub = *p1 - *p2;

     cout<<"\n Sub = "<<sub;
}
void mul(double n1, double n2){

    double A = n1, B = n2;

    double *p1,*p2;

     p1 = &A;
     p2 = &B;

     double mul = *p1 * *p2;

     cout<<"\n Mul = "<<mul;
}
void div(double n1, double n2){

    double A = n1, B = n2;

    double *p1,*p2;

     p1 = &A;
     p2 = &B;

     double div = *p1 / *p2;

     cout<<"\n Div = "<<div;
}

int main(){
    double n1,n2;
    cout<<"Enter 1st number: ";
    cin>>n1;
    cout<<"Enter 2nd number: ";
    cin>>n2;
cout<<"_______________________Using *pointer_______________________";
    sum(n1,n2);
    sub(n1,n2);
    mul(n1,n2);
    div(n1,n2);
}
