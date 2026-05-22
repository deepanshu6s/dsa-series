#include <iostream>
using namespace std;
int main(){
    int i = 1;
    int n = 5;

    while(i<=n){
        int j = 1;

        while (j <=i){
            cout<<j<<" ";
           
            j++;
        } cout<<endl;
        
        i++;
    }
}