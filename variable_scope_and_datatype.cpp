#include<iostream>
using namespace std;
int glo=19;

void func(){
    cout<<glo;
}

int main(){
    int glo=8;
    glo = 99;
    int a=11, b=12;
    float pi = 3.14;
    char c = 'i';
    bool m = true;
    bool n = false;

    func();

    cout<<"\nThe value of a is "<<a<< "\nThe value of b is "<<b<< "\nThe value of pi is "<<pi;
    cout<<"\nThe value of c is "<<c;
    cout<<"\n"<<glo;
    cout<<"\n"<<m;
    cout<<"\n"<<n;
    // local variable preceeds over global variable...
    return 0;
}