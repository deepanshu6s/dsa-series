#include<iostream>
#include <climits>
using namespace std;

int getMax(int array[] , int size1){
   int max = INT_MIN;
   for(int i = 0; i<size1;i++){
      if(array[i]>max){
         max = array[i];
      }
   }return max;

}
int getMin(int array2[],int size2){
   int min = INT_MAX;
   for(int i = 0; i<size2;i++){
      if(array2[i]<min){
         min = array2[i];
      }
   }return min;
}

int main(){
   int arr[1000];
   int size;
   cout<<"enter size : ";
   cin>>size;

   for (int i =0; i<size; i++){
      cout<<"enter "<<i+1<<"value : ";
      cin>>arr[i];


   }
         int g = getMax(arr , size);
      cout<<"maxium value is : "<<g;

      int h = getMin(arr , size);
      cout<<"minimum value is : "<<h;

}