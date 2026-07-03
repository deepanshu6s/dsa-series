#include<iostream>
#include <climits>
using namespace std;

int getMax(int arr[] , int size){
int maxx = INT_MIN;

   for(int i = 0 ; i<size ;i++){
      if(arr[i] > maxx){
            maxx = arr[i];
      }
   }
 return maxx;

}
int getMin(int arr[],int size){
   int minn = INT_MAX;

   for(int i = 0 ; i<size ;i++){
      if(arr[i] < minn){
            minn = arr[i];
      }
   }
   return minn;
}

int main(){

   int arr[100];
   int size;
   cout<<"enter size : ";
   cin>>size;

   for(int i = 0; i<size ; i++){
      cin>>arr[i];
   }

   int max = getMax (arr, size );
   int min = getMin (arr, size);

   cout<<"max : "<<max<<"min : "<<min<<endl;

}