#include <iostream>
using namespace std;
int factorial(int n){
    if(n == 0){
        return 1;
    }
    

    return n*factorial(n-1);
}
int main(){
    int n;
    cout<<"enter the n value : ";
    cin>>n;
    int ans = factorial(n);
    cout << "ans is : "<< ans<<endl;
}