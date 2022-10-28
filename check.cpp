#include<iostream>

using namespace std;

int main(){
    int stu[] ={2110317006,2030032006,2030033006,2110318006};
    int s = sizeof(stu)/sizeof(stu[0]);
    int n;

    cout<<"Enter student id: ";
    cin>>n ;

    for(int i = 0; i<s; i++){

        (stu[i] == n) ? cout<<stu[i]<<" student present today !"
        :cout<<" ";

    }
    return 0;
}
