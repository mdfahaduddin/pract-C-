#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int n,i,sum=0;
    cout<<"Enter number of student: ";
    cin>>n;

    int students[n] ;
    for(i=0;i<n;i++){
        cin>>students[i];
        sum = sum+students[i];

    }
    cout<<"Total marks: "<<sum<<"\n";
    cout<<"Avg: "<<(float)sum/n;

    int max=students[0];
    int min=students[0];

    for(i=1;i<n;i++)
    {
        if(max<students[i])
        {
            max = students[i];
        }

            if(min>students[i])
        {
            min = students[i];
        }
    }
    cout<<"MAX Mark: "<<max<<"\n";
    cout<<"MIN Mark: "<<min;


}
