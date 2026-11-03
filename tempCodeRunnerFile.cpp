#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n: ";
    cin>>n;
    int a = 0;
    int b = 1;
    cout<<a<<endl<<b<<endl;
    for(int i = 0; i<n; i++){
        int c = a+b;
        cout<<c;
        cout<<endl;
        a = b;
        b = c;
        
    }
}