#include <iostream>
using namespace std;

int firstocc(int arr[], int size , int key){
        int start = 0;
    int end = size-1;
    int ans = -1;
    int mid = start + (end - start)/2;

    while (start <= end ){
        if(arr[mid] == key){
            ans = mid;
            end = mid-1;
        }
        else if(arr[mid] > key){
            end = mid-1;
        }
        else {
            start = mid+1;
        }
        mid = start + (end - start)/2;
    }
    return ans ;
}

int lasttocc(int arr[], int size , int key){
        int start = 0;
    int end = size-1;
    int ans = -1;
    int mid = start + (end - start)/2;

    while (start <= end ){
        if(arr[mid] == key){
            ans = mid;
            start = mid+1;
        }
        else if(arr[mid] > key){
            end = mid-1;
        }
        else {
            start = mid+1;
        }
        mid = start + (end - start)/2;
    }
    return ans ;
}

int main()
{
int arr[9] = {1,2,2,3,5,5,5,7,8};

int a  = lasttocc(arr, 9, 5);

cout<<"index is : "<<a<<endl;

}