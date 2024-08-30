#include<iostream>
using namespace std;

int main(){
    
    // for(int i = 0; i<100 ; i++){
    //     if(i==9){
    //         continue;
    //     }
    //     cout<<i<<endl;
    // }
    // 9 ko chhod kr sab print ho jayega...


    for(int i = 0; i<100 ; i++){
        if(i==9){
            break;
        }
        cout<<i<<endl;
    }
    //9 ke baad kuch bhi print nahi hoga...
    


    return 0;
}