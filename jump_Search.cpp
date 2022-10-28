#include <bits/stdc++.h>
#include<iostream>
#include<conio.h>

using namespace std;

int jump_Search(int arr[], int target, int s){
    int start = 0;
    int stop = sqrt(s);

    while(arr[stop]<= target && stop< s){

        start = stop;
        stop+=sqrt(s);

        if(stop> s-1){
            stop = s;
        }
    }
    for(int i=start; i<=stop; i++){
            if(arr[i] == target){
                return i;
            }
    }

    return -1;
}

int main(){

    int arr[] ={1,2,3,4,5,6,7,90,100,110,111,112,113,114,115,116,117,118,119,200,211,212};
    int s_Arr = sizeof(arr)/sizeof(arr[0]);

    int t; cout<<"Target Number: "; cin>>t;

    int res = jump_Search(arr,t,s_Arr);
    if(res>=0){
        cout<<t<<" Found at index: "<<res <<endl<<"Position: "<<res+1;
    }else{
        cout<<"Not found !";
    }

getch();
}
