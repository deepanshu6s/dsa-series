#include <iostream>
using namespace std;

int main(){
    int dest;
    cin>>dest;

    int a = 0; 
    int b = 1;

    for(int i = 0; i<dest; i++){
      int c = a+b;
      a = b;
      b = c;

      cout<<c<<" ";
    }

}