#include <iostream>
#include <array>
using namespace std;
int main(){

    array<int, 5> arr1 = {1,2,3,4,5};

    cout<<arr1[4]<<endl;
    cout<<arr1.at(3)<<endl;

    cout<<"empty wala line: ";

    cout<<arr1.empty();
    cout<<endl;
}