#include <iostream>
using namespace std;

void counting(int n){
   //base case
   if(n==0){
      return;
   }

  
   counting(n-1);

   cout<<n;

}

int main(){
   int b;
   cin>>b;

   counting(b);

}