#include <iostream>
using namespace std;

// function returns index of peak element
int peakIndex(int arr[], int size){

    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;

    while(start < end){
        // we are on increasing side
        if(arr[mid] < arr[mid + 1]){
            start = mid + 1;
        }

        // we are on decreasing side
        else{
            end = mid;
        } mid = start + (end - start)/2;
    }

    // start and end both point to peak
    return start;
}

int main(){

    int arr[10] = {1,2,3,7,8,9,1111,1111111,4,0};

    // calculate array size
    int size = sizeof(arr)/sizeof(arr[0]);

    int peak = peakIndex(arr, size);

    cout << "Peak element is : " << arr[peak];
}