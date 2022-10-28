#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int row,col, A1[2][3]={1,2,3,4,5,6}, A2[2][3]={1,2,3,4,5,6};

    for(row=0; row<2;row++)
    {
        for(col=0;col<3;col++)
        {
            cout<<A1[row][col]*A2[row][col]<<" ";
        }
        cout<<endl;
    }


    getch();
}
