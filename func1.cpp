#include<iostream>

using namespace std;

void sum(int a, int b){
    int sum = a+b;
    cout<<sum;
}
void sub(int a, int b){
    int sub = a-b;
    cout<<sub;
}
void mul(int a, int b){
    int mul = a*b;
    cout<<mul;
}
void div(double a, double b){
    double div = a/b;
    cout<<div;
}

int main(){
    cout<<"SUM =";
sum(20,30);
cout<<"\nSUB = ";
sub(30,30);
cout<<"\nMUL =";
mul(2,4);
cout<<"\nDIV =";
div(20.7,2.8);
}


