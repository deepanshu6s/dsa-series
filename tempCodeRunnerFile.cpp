#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    vector<int> arr  = { 2, 4 , 6};

    cout<<"Size of array is : "<<arr.size()<<endl; 

    cout<<"whats at index no 2  :  "<<arr.at(2)<<endl;

    

    cout<<"is array empty : "<<arr.empty()<<endl;


    cout <<"front element : "<<arr.front()<<endl;

    cout<<"last element : "<<arr.back()<<endl;

}