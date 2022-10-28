#include<iostream>
#include<conio.h>

using namespace std;

int Binary_Search(int arr[] , int target, int low, int high){

    int mid;

    if(low <= high){
        mid = low + (high - low)/2;

        if(arr[mid] == target){
            return mid;
        }else if(arr[mid] < target){
        return Binary_Search(arr,target,mid+1,high);
        }else{
        return Binary_Search(arr,target,low,mid-1);
        }
    }
    return 0;
}

int main(){
    int arr[] = {10,20,30,40,50,60,70,80,90};
    cout<<"Input find number: ";
    int t; cin>>t;
    int s = sizeof(arr) / sizeof(arr[0]);
    int res = Binary_Search(arr,t,0,s-1);

    (res == 0) ? cout<< "Not found !"
    : cout<<" \n "<<t<<" Find at index no : "<<res<<" \n & It's position : "<<res+1;

    getch();
    return 0;
}

