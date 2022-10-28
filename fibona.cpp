#include<iostream>

using namespace std;

int fibo(int n){

    if(n <= 1){
        return n;
    }
    else{
        return fibo(n-1)+fibo(n-2);
    }
}

int main(){

    int l;
    cout<<"Enter length : ";
    cin>>l;
for(int i=1;i<=l;i++){
    cout<<fibo(i)<<" ";
}
}
