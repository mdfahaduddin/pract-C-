#include<iostream>
using namespace std;

int fact(int n){
    if(n<2){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}

int main(){
    int user_Input;
    cout<<"Enter a number for check factorial : ";
    cin>>user_Input;

   cout<< fact(user_Input);

}
