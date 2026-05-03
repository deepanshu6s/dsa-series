//to check if any number is positive negative or zero

#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter the value to check positive or negative : ";
    cin>>n;
    
    if(n<0){
        cout<<"n is negative integer";
    }
    else if (n>0){
        cout<<"n is a positive integer"<<endl;
    }
//else if(n == 0){
//         cout<<"n is 0"<<endl;
//     }
else{
    cout<<"n is 0";
}

}