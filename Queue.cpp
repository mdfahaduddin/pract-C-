#include<iostream>
#include<queue>

using namespace std;

void Showqueue(queue<int>sq){
    queue<int>q=sq;

    while(!q.empty()){
        cout<<" "<<q.front();
        q.pop();
    }
    cout<<"\n";

}

int main(){
    queue<int> qu;
    qu.push(10);
    qu.push(29);
    qu.push(30);

    Showqueue(qu);

    cout<<"Queue Size: "<<qu.size()<<"\n";
    cout<<"Front Queue: "<<qu.front()<<"\n";
    cout<<"Back Queue: "<<qu.back()<<"\n";

    qu.pop();
    cout<<"After pop: ";
    Showqueue(qu);

}
