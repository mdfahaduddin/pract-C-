#include<iostream>
using namespace std;
int main()
{int n,temp,r;
cin>>n;
temp=n;
int sum=0,c=0;
while(temp!=0)
{
    r=temp%10;
    sum=sum*10+r;
    temp=temp/10;
}
n=sum;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            c++;
            break;
        }
    }
    if(c==0)
    {
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }


}
