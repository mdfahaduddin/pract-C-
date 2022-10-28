#include<iostream>
#include<stack>
using namespace std;

int main(){
int i;
stack <int> stack;

for( i =1 ; i<=10; i++){
    stack.push(i);

}

while(!stack.empty()){
    cout<<stack.top()<<" ";
    stack.pop();
}

}
