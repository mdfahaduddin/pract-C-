#include<iostream>

using namespace std;

int main()
{
   int arr[]={2,3,5,4,566,7,65,43,3,3,4};
    int s,len;

    for(auto i: arr){
        s++;
    }
    len = *(&arr +1) - arr;
    cout<<"Array size : "<< s;
    cout<<"\n\nArray size : "<<end(arr)-begin(arr);
        cout<<"\n\nArray size using pointer: "<<len;
        cout<<"\n\nArray size : "<<sizeof(arr)/sizeof(arr[0]);
}
