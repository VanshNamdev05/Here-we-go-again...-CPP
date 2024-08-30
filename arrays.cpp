#include<iostream>
using namespace std;

int main(){
    
    int marks[5] = {22 , 33 , 44 , 55 , 66};
    // cout<< marks[0]<<endl;
    // cout<< marks[1]<<endl;
    // marks[2]=0;
    // //we can change the value of the arrays;
    // cout<< marks[2]<<endl;
    // cout<< marks[3]<<endl;
    // cout<< marks[4]<<endl;


    //using for loop
    int i = 0;
    for(marks[i]; i<5 ; i++){
        cout<<"The value of marks "<<i<<" is : "<<marks[i]<<endl;
    }

    return 0;
}