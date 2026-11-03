#include <iostream>
using namespace std;
int main(){
    int n; 
    cout<<"enter the value of n: ";
    cin>>n;

    bool isPrime = 1;

    for(int i = n-1; i>2; i--){
        if(n%i == 0){
            isPrime = 0;
            break;
        }
    }

    if(isPrime){
        cout<<"prime number "<<endl;
    }else{
        cout<<"not prime "<<endl;
    }
}