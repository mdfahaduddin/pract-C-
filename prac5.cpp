#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int num1,num2,sum,sub,mul,rem;
    float div;

    cout<<"Enter 1st Number: ";
    cin>>num1;
    cout<<"Enter 2nd Number: ";
    cin>>num2;


    sum = num1+num2;
    sub = num1-num2;
    div=(float)num1 / (float)num2;
    mul=num1*num2;
    rem=num1%num2;

    cout<<sum<<endl;
      cout<<sub<<endl;
        cout<<div<<endl;
          cout<<mul<<endl;
            cout<<rem<<endl;
    getch();
}
