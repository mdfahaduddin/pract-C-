#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int n,i,j,k;

    cout<<"Enter a number: ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
        {
            cout<<" ";
        }
        for(k=1; k<=i*2-1;k++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }

    getch();
}
