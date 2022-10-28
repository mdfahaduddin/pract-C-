#include<iostream>

using namespace std;

int main(){
    int a_S;
    cout<<"Enter array size : ";
    cin>>a_S;
    int arr[a_S],i,j;
    cout<<"Enter array elements : ";
    for(i=0;i<a_S;i++){
       cin>> arr[i];
    }
    for(j=0;j<a_S;j++){
        cout<<arr[j];
    }

}
