#include <iostream>
#include <array>
using namespace std;
int main(){

    array<int, 5> arr1 = {1,2,3,4,5};

    cout<<"at operation :  ";
    cout<<arr1.at(4)<<endl;

    cout<<"back operation :  ";
    cout<<arr1.back()<<endl;

    cout<<"empty :   ";
    cout<<arr1.empty()<<endl;

    cout<<"front operation  :  ";
    cout<<arr1.front()<<endl;


    cout<<"size :  ";
    cout<<arr1.size();


    return 0;
}