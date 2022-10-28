#include<iostream>

using namespace std;

int queueArr[5], n=5, frontData = -1, rearData = -1 ,i;

bool isEmpty(){
    if(frontData == -1 && rearData == -1){
        return true;
    }else{
    return false;
    }
}

void enqueue ( int value )
{
 if (rearData == n-1)
  cout<<"Queue is full \n";
 else
 {
  if( frontData == -1){
   frontData = 0;
  }
  rearData++;
  queueArr[rearData] = value;
 }
}

void dequeue(){
    if(isEmpty()){
        cout<<"Queue is empty !";
    }else{
    if(frontData == rearData){
        frontData = -1;
        rearData = -1;
    }else{
    frontData++;
    }
    }
}

void frontDataShow(){
  if(isEmpty()){
    cout<<"Queue is empty !";
  }else{
  cout<<"Now front data is : "<<queueArr[frontData];
  }
}

void queueDataShow(){
    if(isEmpty()){
        cout<<"Queue is empty !";
    }else{
        cout<<"Queue is : ";
    for(i=frontData; i<=rearData; i++){
        cout<<queueArr[i]<<" ";
    }
    cout<<"\n";
    }
}

int main(){
    int val , option, indicator =1;

    while(indicator == 1){
           cout<<"\n(1) Enqueue\n";
         cout<<"(2) Dequeue\n";
          cout<<"(3) Front\n";
           cout<<"(4) Queue\n";
            cout<<"(5) Exit\n";

            cout<<"\nChoice option : ";
            cin>>option;

            switch(option){
            case 1 : {
            cout<<"Enter value : ";
            cin>>val;
            enqueue(val);
            break;
            }
            case 2 : {
            dequeue();
            break;
            }
            case 3 : {
            frontDataShow();
            break;
            }
            case 4 : {
            queueDataShow();
            break;
            }
            case 5 : {
            indicator = 0;
            break;
            }
            default : {
            cout<<"Invalid attempt !";
            }

            }
    }
    return 0;
}
