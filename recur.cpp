#include<iostream>

#include<conio.h>

using namespace std;

void recur1(int a){

    if(a < 1){
        return;
    }
        else{
            cout<<a;
            recur1(a - 1);
        cout<<a;
            return;
        }


}

int main(){


   recur1(3);

    getch();
    return 0;
}
