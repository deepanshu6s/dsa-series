#include <iostream>
using namespace std;
int main(){

        int arr[7] = { 1,1,98,98,999,5,5};
        int size = 5;
        int unique = 0;
        
        for(int i = 0; i<size ; i = i+1){

                unique = unique^arr[i];
            
        
        }
  cout<<unique<<endl;

}