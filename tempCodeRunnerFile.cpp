#include <iostream>
using namespace std;

int occ(int arr[], int key, int size){

    int start = 0;
    int end = size -1;
    int mid = start+(end-start)/2;
    int ans = -1;

    while (start <= end){
        if(arr[mid] == key){
            ans = mid;
            start = mid-1;
        }
    }

}


int main(){

    int lg[8] = {0,0,1,1,2,2,2,2};
    int key = 2;

}