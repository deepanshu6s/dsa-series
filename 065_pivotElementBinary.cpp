#include <iostream>
using namespace std;

//just read the flow and u will get the logic
// function returns index of smallest element
int pivotIndex(int arr[], int size){

    int start = 0;
    int end = size - 1;

    while(start < end){

        // find middle index
        int mid = start + (end - start)/2;

        // mid is on left sorted side
        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }

        // mid is on right sorted side
        else{
            end = mid;
        }
    }

    // start/end points to smallest element
    return start;
}

int main(){

    int arr[8] = {7, 9, 11, 12, 1, 2, 3, 5};

    int size = sizeof(arr)/sizeof(arr[0]);

    int pivot = pivotIndex(arr, size);

    cout << "Smallest element : " << arr[pivot] << endl;

    // largest pivot element
    cout << "Pivot element : " << arr[pivot - 1];
}