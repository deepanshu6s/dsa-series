#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 2;
    int sum = 0;

    while(i<=n){
        sum = sum+i;
        i =i+2;
    }                   //prints the sum of even numeber till n; eg n = 10 then 2+4+6+8+10;
    cout <<sum;
}