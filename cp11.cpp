#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int i,j,k,n;
    cout<<"Enter range: ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%2==0)
            {
                 cout<<"  0  ";
            }
           else{
             cout<<"  1  ";
           }
        }
        cout<<"\n";
    }
    getch();
}
