#include <iostream>
using namespace std;
int main(){
    int arr[10] = {45,69,84};

    //address of first memory block is array name itself

    int *p = arr;

    cout<<sizeof(p)<<endl;
    cout<<sizeof(arr);
    
    
} 