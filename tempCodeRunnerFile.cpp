#include <iostream>
using namespace std;

int fact(int num){
    int mul = 1;
    for(int i = 1; i<=num ; i++){
            mul = mul*i;
    }return mul;
}

int nCr(int n , int r){
    int a = fact(n) / (fact(r) * fact(n-r));
    return a;
}

int main(){

        int a,b;
        cout<<"enter n: ";
        cin>>a;

        cout<<"enter r: ";
        cin>>b;

        int answer = nCr(a,b);

        cout<<"nCr = "<<answer<<endl;
        
}