#include<iostream>

using namespace std;

void bubble_sort(int A[] , int n){
    int i,j,temp;

    for( i=0; i<n; i++ ){
        for( j=i+1; j<n; j++ ){
            if( A[i] > A[j] ){
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
}

int main(){
    int as;
    cout<<"Enter array size : ";
    cin>>as;

    int A[as];
    cout<<"Enter array elements : ";
    for(int j = 0; j<as; j++){
        cin>>A[j];
    }
    bubble_sort(A,as);

    for(int i=0;i<as;i++){
        cout<<A[i]<<" ";
    }
}
