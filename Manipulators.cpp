#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    
    int a ,b,c;
    a=1;
    b=12;
    c=1234;

    cout<<"The value of a without setw is "<<a<<endl;
    cout<<"The value of a without setw is "<<b<<endl;
    cout<<"The value of a without setw is "<<c<<endl;

    cout<<"The value of a is "<<setw(4)<<a<<endl;
    cout<<"The value of a is "<<setw(4)<<b<<endl;
    cout<<"The value of a is "<<setw(4)<<c<<endl;


    return 0;
}