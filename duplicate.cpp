#include<iostream>
using namespace std;

int main(){
int Arr[] = {2,3,4,5,4,3,2,8,9,0};
int i,j,k,n=10;

for(i=0;i<n;i++){
    for(j=i+1;j<n;){
        if(Arr[i]==Arr[j]){
            for(k=j;k<n;k++){
                Arr[k] = Arr[k+1];
            }
            n--;
        }else{
            j++;
        }

    }
}
for(i=0;i<n;i++){
    cout<<Arr[i];
}
}
