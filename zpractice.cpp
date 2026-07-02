#include <iostream>
using namespace std;


int powerans (int num){

    if(num%2 == 0){
        return 1;
    }else {
        return 0;
    }
    
}


int main(){
     int num ;
     cin>>num;
     
     int a = powerans(num);

     if(a == 1){
        cout<<num<<" is an even number"<<endl;
     }else{
        cout<<num<<" is odd "<<endl;
     }
}