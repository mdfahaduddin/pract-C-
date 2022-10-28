#include<iostream>

using namespace std;

int stackArr[5], n=5, top=-1, i;
//int n = sizeof(stackArr) /sizeof(stackArr[0]);

void push(int value){
    if(top == n-1){
        cout<<"\nStack is full !\n";
    }else{
    top++;
    stackArr[top] = value;
    }
}
void pop(){
    if(top == -1){
        cout<<"\nStack is empty !\n";
    }else{
    top--;
    }
}

void Top(){
    if(top == -1){
        cout<<"\nStack is empty !\n";
    }else{
    cout<<"\nNow, stack top is : "<<stackArr[top]<<"\n";
    }
}

void displayStackArr(){
if(top == -1){
    cout<<"\nStack is empty !\n";
}else{
    cout<<"\nNow, stack is: ";
    for(i=0; i<=top; i++){
        cout<<stackArr[i]<<" ";
    }
    cout<<"\n";
}
}

int main(){
    int val,option,indicator=1;

    while(indicator == 1){
        cout<<"\n(1) Push\n";
         cout<<"(2) Pop\n";
          cout<<"(3) Top\n";
           cout<<"(4) Stack\n";
            cout<<"(5) Exit\n";

            cout<<"\nChoice option : ";
            cin>>option;
            switch(option){
            case 1: {
                cout<<"Enter value : ";
                cin>>val;
                push(val);
                break;
            }
            case 2: {
            pop();
            break;
            }
            case 3: {
            Top();
            break;
            }
            case 4: {
            displayStackArr();
            break;
            }
            case 5: {
            indicator = 0;
            break;
            }
            default: {
            cout<<"Invalid option choice !";
            }
            }
    }

    return 0;

}
