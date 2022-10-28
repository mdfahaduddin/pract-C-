#include<iostream>

using namespace std;

void sum(double a, double b){
    int res;
     res = a+b;
     cout<<res;
}
void sum(double a, double b, double c){
    int res;
     res = a+b+c;
     cout<<res;
}

void sum(double a, double b, double c, double d){
    int res;
     res = a+b+c+d;
     cout<<res;
}

int main(){
sum(1,2,3);
}
