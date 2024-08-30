#include<iostream>
using namespace std;

int main(){
    
    int marks[5]={11,22,33,44,55};

    int *p = marks;

    // cout<<*p<<endl;
    // cout<<*p++<<endl;
    // cout<<*p++<<endl;
    // cout<<*p++<<endl;
    // cout<<*p++<<endl;
    //or
    cout<<*p<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl;
    cout<<*(p+3)<<endl;
    cout<<*(p+4)<<endl;

    return 0;
}