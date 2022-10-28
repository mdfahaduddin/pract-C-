#include<iostream>
#include<conio.h>
using namespace std;

void add(int a, int b) {
   int sum = a+b;
   cout<<"Sum of "<<a<<"+"<<b<<" = "<<sum<<"\n";
}
void sub(int a,int b){
    int sub = a-b;
    cout<<"Sub of "<<a<<"-"<<b<<" = "<<sub<<"\n";
}
void mul(int a, int b){
int mul = a*b;
cout<<"Mul of "<<a<<"*"<<b<<" = "<<mul<<"\n";
}
void div(double a , double b){
double div = a/b; // (float)a/b; -> type casting
cout<<"Div of "<<a<<"/"<<b<<" = "<<div<<"\n";
}

int main()
{
    int sum_in1,sum_in2,sub_in1,sub_in2,mul_in1,mul_in2;
    double div_in1,div_in2;

    cout<<"Enter two number for Sum: \n";
    cin>>sum_in1>>sum_in2;
    cout<<"Enter two number for Sub: \n";
    cin>>sub_in1>>sub_in2;
    cout<<"Enter two number for Mul: \n";
    cin>>mul_in1>>mul_in2;
    cout<<"Enter two number for Div: \n";
    cin>>div_in1>>div_in2;
    cout<<"\n"<<"\n";

    add(sum_in1,sum_in2);
     sub(sub_in1,sub_in2);
      mul(mul_in1,mul_in2);
       div(div_in1,div_in2);

    getch();
}
