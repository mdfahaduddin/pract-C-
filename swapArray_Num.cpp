#include<iostream>

using namespace std;

int main(){
int Arr[] = {2,6,9,1,3,8,5,7,4,0};
int i,j,asc;
for(i=9;i>=0;i--){
    cout<<Arr[i]<<" ";
}
cout<<"\n";
for(i=0;i<10;i++){
    for(j=i+1;j<10;j++){
    //if(Arr[i]<Arr[j])  descending order;
        if(Arr[i]>Arr[j]){
            asc = Arr[i];
            Arr[i] = Arr[j];
            Arr[j] = asc;
        }
    }
}
for(i=0;i<10;i++){
    cout<<Arr[i]<<" ";
}
}
