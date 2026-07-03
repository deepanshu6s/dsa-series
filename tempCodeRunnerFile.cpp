#include <iostream>
using namespace std;

void print(char arr[], int size ){
    for(int i = 0; i<size ; i++){
         cout <<arr[i]<<"   ";
    }
}
int main(){

    char arr[5] = {'a','b', 'b', 'c', 'd'};

   print(arr, 5);

  
}