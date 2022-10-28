#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int n,i;
    cout<<"Enter an integer: ";
    cin>>n;

    for(i=1;i<=10;i++)
    {
        cout<<n<<"*"<<i<<"="<<n*i<<"\n";

    }

    getch();
}
