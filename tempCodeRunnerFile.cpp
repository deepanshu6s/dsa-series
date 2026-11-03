#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n = 123;
    int ans = 0; 
    while(n != 0){
        int digit = n%10;
        n = n/10;
        for(int i = 0; i<3; i++){
            ans = (digit*(pow(10,i)))+ans;
        }
    }
    cout<<ans;
}