#include<iostream>
#include<conio.h>
using  namespace std;

int main(){

    int num1 ,num2, num3;

    cout<<"Enter 3 number: ";
    cin>>num1>>num2>>num3 ;

    cout<<"Larg Number: ";
    if(num1>num2 && num1>num3){
        cout<<num1;
    }
    else if(num2>num1 && num2>num3){
        cout<<num2;
    }
    else{
        cout<<num3;
    }

getch();
}