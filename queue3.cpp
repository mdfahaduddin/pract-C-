#include <iostream>
using namespace std;

#define SIZE 5
int A[SIZE];
int front = -1;
int rear = -1;
//function to check if queue is empty
bool isempty()
{
 if(front == -1 && rear == -1)
 return true;
 else
 return false;
}
//function to insert element in queue
void enqueue ( int value )
{
 if (rear == SIZE-1)
  cout<<"Queue is full \n";
 else
 {
  if( front == -1)
   front = 0;
  rear++;
  A[rear] = value;
 }
}
//function to remove element from queue
void dequeue ( )
{
 if( isempty() )
  cout<<"Queue is empty\n";
 else
 if( front == rear )
  front = rear = -1;
 else
  front++;
}
//function to display element at front
void showfront( )
{
 if( isempty())
  cout<<"Queue is empty\n";
 else
  cout<<"element at front is:"<<A[front]<<"\n";
}
//function to display elements of the queue
void displayQueue()
{
 if(isempty())
  cout<<"Queue is empty\n";
 else
 {
  for( int i=front ; i<= rear ; i++)
   cout<<A[i]<<" ";
  cout<<"\n";
 }
}

int main()
{
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
            showfront();
            break;
            }
            case 4 : {
            displayQueue();
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

 return 0;
}
