#include <iostream>
using namespace std;
int main(){
    int n; 
    cin>>n;
    
    bool abc = 0;

    for(int i = 2 ; i<n; i++){

    if(n%i == 0){
        abc =  1;
    }

    }

    if(abc){
        cout<<"not prime"<<endl;
    }else{
        cout<<"Prime"<<endl;
    }
}