#include <iostream>
using namespace std;

void Printing (int n){
    for(int i = 0; i<=n; i++){
        cout<<i<<" ";
    }cout<<endl;
}

int main(){

    int n;
    cout<<"print till where you wants to print the counting : ";
    cin>> n ;

    Printing (n);

}