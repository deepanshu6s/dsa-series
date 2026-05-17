#include <iostream>
using namespace std;

int pivot(int arr[], int size){

        int start = 0;
        int end = size -1;
        int mid = start+(end-start)/2;

        while(start <end){
            if(arr[0] <= arr[mid]){
                start = mid+1;
            }
            else{
                end = mid;
            }
            mid = start + (end - start)/2;
        }return end;
}


int search(int arr[], int key, int start , int end){
    // int start = 0;
    // int end = size -1;
    int mid = start + (end - start )/2;
    while(start <= end){
       if(arr[mid] == key){
        return mid;
       }
       else if(key > arr[mid]){
        start = mid+1;
       }else{
        end = mid-1;
       }

       mid = start + (end - start )/2;
    }return -1;
}


int main(){
    int array[5] = {7,9,1,2,3};
    
    int p = pivot(array, 5);

    int find = 9;
    int x;
    if(find >= array[0]){
        int start = 0;
        int end = p-1;
         x = search(array, find,start , end);
    }else{
        int start = p;
        int end = 4;
         x = search(array, find,start , end);
    }
    if(x == -1){
        cout<<"element not present";
    }else {
        cout<<"element present";
}
}

