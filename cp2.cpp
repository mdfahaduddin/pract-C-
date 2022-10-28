#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

int main()
{
    char passCheck[]="";
    int ID;
    cout<<"Enter your ID: ";
    cin>>ID;
    cout<<"Enter your password: ";
    cin>>passCheck;
    char password[]= "32783815FS";

    if(strcmp(passCheck,password)  ==  0 && ID  ==  2110317006)
    {
       cout<<"Login Success !\n";
       cout<<"\nYour 2nd installment : 6403 Tk."<<endl;
    }
    else{
        cout<<"Login Failed !";
}


}
