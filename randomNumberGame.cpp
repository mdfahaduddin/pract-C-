#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    int gNumber,randNum;

while(1){
        cout<<"\nEnter your guess number : ";
    cin>>gNumber;

    randNum = rand()%5+1;

    if(gNumber == randNum) {
        cout<<"Won";
    }else{
    cout<<"Lost"<<endl;
    cout<<"Number was : "<<randNum;
    }
}

}
