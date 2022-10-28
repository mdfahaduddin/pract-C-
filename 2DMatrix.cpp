#include<iostream>

using namespace std;
int i,j,sum;

void principleDiagonalMat(int mat[100][100], int n){
    cout<<"\n Principle Diagonal Matrix \n";
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i == j){
                cout<<" "<<mat[i][j]<<" ";
            }else{
            cout<<" 0 ";
            }
        }
        cout<<"\n";
    }
}


void secondaryDiagonalMat(int mat[100][100], int n){
    cout<<"\n Secondary Diagonal Matrix \n";
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){

            if((i+j) == (n-1)){
                cout<<" "<<mat[i][j]<<" ";
            }else{
            cout<<" 0 ";
            }
        }
        cout<<"\n";
    }

}

void principle_secondary_DiagonalMat(int mat[100][100], int n){
    cout<<"\n Principle & Secondary Diagonal Matrix \n";
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){

            if(i == j){
               cout<<" "<<mat[i][j]<<" ";
            }
            else if((i+j) == (n-1)){
                cout<<" "<<mat[i][j]<<" ";
            }else{
            cout<<" 0 ";
            }
        }
        cout<<"\n";
    }

}

void printMat(int mat[100][100], int n){
    cout<<"\n Original Matrix \n";
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<" "<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
}

void principleDiagonalMatSum(int mat[100][100], int n){

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i == j){
                    //sum=sum+mat[i][j];
                    sum+=mat[i][j];
            }
        }
    }
       cout<<"\n Principle Diagonal Matrix sum ="<<sum<<"\n";
}

int main(){
    int arr[100][100],n; /* = {
                    {1,2,3,4},
                    {5,6,7,8},
                    {1,2,3,4},
                    {5,6,7,8}
                  }; */
                  cout<<"Enter matrix size (n*n) : ";
                  cin>> n;
                  for(i=0;i<n;i++){
                    for(j=0;j<n;j++){
                        cout<<"Arr ["<< i<<" "<< j<<"] : ";
                        cin>>arr[i][j];
                    }
                  }

    principleDiagonalMat(arr,n);
    secondaryDiagonalMat(arr,n);
    principle_secondary_DiagonalMat(arr,n);
    printMat(arr,n);
    principleDiagonalMatSum(arr,n);
}
