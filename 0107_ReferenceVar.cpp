#include <iostream>
using namespace std;
int main(){

    int i = 5;
    int & j = i;


    /*cout<<&j;
    cout<<&i;    i and j have same addresses */


    j++;
    j++; 

    cout<<i;
      
   
} 