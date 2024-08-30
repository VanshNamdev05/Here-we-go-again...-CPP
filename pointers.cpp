#include<iostream>
using namespace std;

int main(){
    
    int a = 6;
    int *b = &a;
    int **c = &b;

    cout<<&a<<endl;
    cout<<b<<endl;
    cout<<a<<endl;
    cout<<*b<<endl;
    cout<<**c<<endl;
    cout<<c<<endl;

    return 0;
}