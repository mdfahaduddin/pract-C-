#include<iostream>

using namespace std;

int fact(int n){
    if(n <= 1 ){
        return 1;
    }else{

    return n*fact(n-1);
    }
}

int main(){
    for(int i=1; i<=5; i++)
    cout<<fact(i)<< " ";
}
