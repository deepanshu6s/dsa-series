#include <iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int i =1;

    int sum = 0;

    while(i<=n){
        i = i*2;
        sum = sum+i;
        i = i/2;
        i++;
    }
cout<<sum;}