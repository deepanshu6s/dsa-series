#include <iostream>
#include <climits>
using namespace std;

int max(int arr[], int size){
    int start = 0;
    int end = size -1;
    int m = INT_MIN;

    while(start <= end){
        if (arr[start] > m){
            m = arr[start];
        }start++;
    }return m;
}

int main(){

    int arr[6] = { 1,2,3,8,4,5};

    int gg = max(arr, 6);
    cout<<"max element is : "<<gg<<endl;
}