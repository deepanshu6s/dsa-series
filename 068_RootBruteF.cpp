#include <iostream>
using namespace std;


int root(int a){

    int i = 0;
    int ans;
    
    while(i <= a/2){
    if(i*i <= a){
        ans = i;
    }i++;

    }return ans;
    

}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    int b = root(n);

    cout<<"Root is : "<<b;

}