#include <iostream>
using namespace std;
void count(int n){
if(n == 0){
    return ;
}

cout<<endl;
count(n-1);
cout<<n;
cout<<endl;
}
int main(){
int n;
cin>>n;
count(n);
}