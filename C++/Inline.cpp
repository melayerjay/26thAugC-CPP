#include<iostream>

using namespace std;

inline void Max(int a,int b){
    // if(a>b){
    //     cout<<"\nGreater Number:"<<a;
    // }else{
    //     cout<<"\nGreater Number:"<<b;
    // }

    (a>b) ? cout<<"\nGreater Number:"<<a : cout<<"\nGreater Number:"<<b;

// Condition '?' trueStatement : falseStatement
}


int main(){

    int num1,num2;

    cout<<"Enter Number 1: ";
    cin>>num1;

    cout<<"Enter Number 1: ";
    cin>>num2;

    Max(num1,num2);

}