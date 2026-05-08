#include <iostream>
using namespace std;

int main(){

   int arr[100];

   int size;
   cout<<"enter no of elements in array : ";
   cin>>size;

   for (int i = 0; i<size; i++){
      cout<<"enter element no "<<i+1<<" : ";
      cin>>arr[i];
   }

   int sum = 0;
   
   for (int j = 0;j<size;j++){
      sum = sum+arr[j];
   }
   cout<<"sum of array is : "<<sum;
}