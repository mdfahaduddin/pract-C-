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
for(int i=0;i<6;i++){
    cout<<fibo(i);
}
}
