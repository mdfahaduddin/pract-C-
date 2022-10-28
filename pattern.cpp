#include<iostream>
#include<conio.h>

using namespace std;

int main(){

int n,row,col;

cout<<"Enter number of line: ";
cin>>n;


for(row=n;  row>=1; row--){
    for(col=row; col>=1; col--){
        cout<<" "<<col;
    }
    cout<<endl;
}


for(row=1;  row<=n; row++){
    for(col=1; col<=row; col++){
        cout<<" "<<row;
    }
    cout<<endl;
}

for(row=1;  row<=n; row++){
    for(col=1; col<=row; col++){
        cout<<" "<<col;
    }
    cout<<endl;
}

for(row=1;  row<=n; row++){
    for(col=1; col<=row; col++){
        cout<<" "<<"*";
    }
    cout<<endl;
}
getch();
}
