#include <iostream>
using namespace std;

int binary(int arr[], int size, int key){

   int start = 0;
   int end = size-1;
   int mid = start+(end - start)/2;


   for(int i= 0; i <= end ; i++){

   if(arr[mid] == key){
      return mid;
   }
   else {
      if(arr[mid] > key){
         end = mid-1;
      }else {
         start = mid+1;
      }
   }
   mid = start+(end - start)/2;
   cout<<"updated mid"<<endl;
}
return 0;

}

int main(){

  int arr[7] = {1,2,3,4,5,6,7};
  int size = 7;
  int key = 6;
  cout<<endl<<binary(arr, size, key)<<endl;

}