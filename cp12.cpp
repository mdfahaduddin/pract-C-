#include<iostream>
#include<conio.h>
using namespace std;

int main(){


int A[2][3] , B[2][3];

cout<<"Enter 1st matrix \n";
for(int row = 0;  row<2; row++)
{
    for(int col = 0; col<3; col++)
    {
        cout<<"A["<<row<<"]"<<"["<<col<<"]";
        cin>>A[row][col];
    }
}
cout<<"Enter 2nd matrix \n";
for(int row = 0;  row<2; row++)
{
    for(int col = 0; col<3; col++)
    {
        cout<<"B["<<row<<"]"<<"["<<col<<"]";
        cin>>B[row][col];
    }
}
cout<<"\nFinal matrix\n";
for(int row = 0;  row<2; row++)
{
    for(int col = 0; col<3; col++)
    {

        cout<< A[row][col] + B[row][col]<<" ";
    }
    cout<<endl;
}

getch();
}
