#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter 1st number: "<<endl;
    cin>>a;
    cout<<"Enter 2nd number: "<<endl;
    cin>>b;
    cout<<"Enter 3rd number: "<<endl;
    cin>>c;

    if(a>b && a>c)
    {
        cout<<a<<"is MAX number "<<endl;
    }
    else if(b>a && b>c)
    {
        cout<<b<<"is MAX number "<<endl;
    }
    else if(c>a && c>b)
    {
        cout<<c<<" is MAX number "<<endl;
    }
       else if(b==a || b==c || a==c)
    {
        cout<<"Equal number "<<endl;
    }
    else{
        cout<<"Not in range";
    }

    getch();
}
