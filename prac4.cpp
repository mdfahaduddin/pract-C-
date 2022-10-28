#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main(){
    int n1,n2;
    cout<<"Enter 2 number: ";
    cin >> n1 >> n2;

    cout<<setw(15)<<"Sum = "<<n1+n2<<endl;

   // cout<<showpoint;
   // cout<<noshowpoint;

    cout<<setw(15)<<"Mul = "<<n1*n2<<endl;


    cout<<setw(15)<<"Div = "<< n1/(float) n2<<endl; //type casting
    //cout<<setprecision(10);
    cout<<setw(15)<<"Rem = "<<n1 % n2<<endl;



    getch();

}
