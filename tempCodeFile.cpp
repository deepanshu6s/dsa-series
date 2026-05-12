#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0; //start index
    int end = size - 1; // end index

    int mid  = (start + (end-start)/2);

    while(start <= end){
        if (arr[mid] == key){
            return mid;
        }if(arr[mid] < key){
            start = mid+1;

        }else{
            end = mid-1;
        }
        mid = (start + (end-start)/2);


    }return -1; //jab kuch na mile 

}


int main(){
    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3,8,11,14,16};


    int a = binarySearch(even , 8, 112);
    cout<<"index is : "<<a;

}