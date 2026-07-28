#include <iostream>
using namespace std;

inline int max(int a , int b){  //inline function 

    return ((a>b) ? a : b);

}

int main(){

    cout<<max(200,3);

}