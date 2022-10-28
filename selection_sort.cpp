#include<iostream>

using namespace std;

int main(){

    int arr[]={3,8,0,3,4,6,8,9,1,45,6,788,77,9,-88,-1}, i,j,temp;
    int s = sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<s;i++){
        int min_in = i;
        for(j=i+1; j<s; j++){

            if(arr[j]<arr[min_in])
            min_in=j;

        }
            temp = arr[min_in];
            arr[min_in] = arr[i];
            arr[i] = temp;
    }

    for(i=0;i<s;i++){
        cout<<arr[i]<<" ";
    }
}
