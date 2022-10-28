#include<bits/stdc++.h>
#include<iostream>

using namespace std;


int iterpolation_Search(int arr[], int low, int high, int target){
    int position;

    if(low<=high && arr[low]<=target && arr[high]>=target){
        position = low + (((double)(high-low)/(arr[high]-arr[low]))*(target-arr[low]));

        if(arr[position] == target){
            return position;
        }else if(arr[position]<target){
        return iterpolation_Search(arr,position+1,high,target);
        }else{
        return iterpolation_Search(arr,low,position-1,target);
        }
    }

    return -1;
}

int main(){

    int arr[]={0,10,23,56,79,89,100,200,300,400,500};
    int s=sizeof(arr)/sizeof(arr[0]);

    int t; cout<<"Enter target number: ";
    cin>>t;

    int p = iterpolation_Search(arr,0,s-1,t);

    if(p == -1){
        cout<< "Not Found !";
    }else{
        cout<< "Index: "<<p;
    }

}
