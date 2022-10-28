#include<iostream>

using namespace std;

void display(int num[], int s){
    for(int i=0;i<s;i++){
       cout<< num[i]<<" ";
    }
}

int main()
{

    int num[]={2,1,4,5,6};
    display(num,5);

}
