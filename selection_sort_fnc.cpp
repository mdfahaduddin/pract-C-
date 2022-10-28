#include<iostream>

using namespace std;

void selection_sort(int arr[], int s){
    int temp,i,j,min_Ind;

    for(i=0;i<s;i++){
        min_Ind = i;
        for(j=i+1;j<s;j++){
            if(arr[j]<arr[min_Ind]){
                min_Ind = j;
            }
        }
        temp = arr[min_Ind];
        arr[min_Ind] = arr[i];
        arr[i] = temp;
    }
}

int main(){
    int arr[]={-99,-1,0,4,8,9,3,2,1,6,7,1002};
    int s = sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr,s);

    for(int i=0; i<s; i++){
        cout<<arr[i]<<",";
    }
}
