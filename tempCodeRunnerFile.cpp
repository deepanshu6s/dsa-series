#include <iostream>
using namespace std;

int pivot (int arr[], int size){
       int start = 0; 
       int end = size -1;
       int mid = start + (end - start)/2;

       while(start< end){
        if(arr[0] < arr[mid]){
                start = mid+1;
        }
        else if (arr[0] > arr[mid]){
                end = mid;
        }
        mid = start + (end - start)/2;
        
}
return start;
}


int main(){

        int arr[5] = {7,9,11,3,5};
        
        int a = pivot(arr, 5);

        cout<<"pivot is : "<<a<<endl;

}