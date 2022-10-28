#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){


    for(int i=1; i<=5; i++){

    int random_number = rand()%5+1 ;
    cout<<random_number<<" ";

    }
}
