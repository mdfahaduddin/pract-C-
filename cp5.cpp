#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int n,row,col,space;
    cout<<"Enter an integer: ";

    cin>>n;

    for(row=1;row<=n;row++)
    {
        for(space=row;space<n;space++)
        {
            cout<<" ";
        }
        for(col=1;col<=2*row-1;col++)
        {
            if(col%2==1)
            {
                cout<<"0";
            }
            else{
                cout<<"1";
            }
        }
        cout<<"\n";
    }

    getch();
}
