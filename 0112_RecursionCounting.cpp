#include <iostream>
using namespace std;
void print(int n){
    if(n == 0)
        return;  //return 1 nahi likha because void funciton

    cout<<n;
    print(--n);  //dont use n-- see why??
                 //can use print(n-1);
  

}


int main(){

    int n;
    cin>>n;

    print(n);

}