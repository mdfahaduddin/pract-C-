#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int n;

    cout<<"Enter an integer: ";
    cin>>n;

    if(n%2==0)
    {
        cout<<n<<" is Even Number";
    }
    else{
        cout<<n<<" is Odd Number";
    }

    getch();
}
