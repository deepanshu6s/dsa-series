#include <iostream>
using namespace std;

// function returns index of smallest element
int pivotIndex(int arr[], int size){

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;

    while(start < end){

        

        // we are on left sorted side
        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }

        // we are on right sorted side
        else{
            end = mid;
        }mid = start + (end - start)/2;
    }

    return start;
}

int main(){

    int arr[7] = {7, 9, 11, 1, 2, 3, 5};

    int size = sizeof(arr)/sizeof(arr[0]);

    int pivot = pivotIndex(arr, size);

    cout << "Pivot element is : " << arr[pivot];
}