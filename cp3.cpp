#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
   int n,i,j;
   cout<<"Enter an integer: ";
   cin>>n;

   for(i=1;i<=n;i++)
   {
       for(j=1;j<=i;j++)
       {
           if(j%2==1)
           {
               cout<<"1";
           }
           else{
            cout<<"0";
           }
       }
       cout<<"\n";
   }

    getch();
}
