#include<iostream>

using namespace std;

int i,j,n,k=10; //global variable

void display(int arr[], int arrSize){
for(i=0;i<arrSize;i++){
  cout<<arr[i]<<" ";
}
}

int main(){
    int arr[3];
    int k=20;
    ::k=30; // change global variable value
    cout<<::k<<" "; //::k [ scop resolution ]
    cout<<k;
    cout<<"\nEnter array size : ";
    cin>>n;

    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    display(arr,n);
}
