#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack <int> stack;
    stack.push(2);
    stack.push(21);
    stack.push(222);
    stack.push(23);

    stack.pop();

    while(!stack.empty()){
        cout<<stack.top()<<" ";
        stack.pop();
    }
}
