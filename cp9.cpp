#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int n,sum=0,i;

    cout<<"Enter an range: ";
    cin>>n;

    for(i=1;  i<=n; i=i+1)
    {
        sum+=i;
        cout<<sum<<"\n";
        cout<< i ;
    }

    getch();
}
