#include <iostream>
using namespace std;
void printSteps(int * arr,int start , int end){
    for(int i = start; i<=end; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

bool binarySearch ( int *arr, int start, int end , int key){
    cout<<endl;
    printSteps(arr,start, end);
    cout<<endl;
    if(start > end){//element not found to false dedo
        return false;
    }
    int mid = start + (end - start)/2;

    if(arr[mid] == key){//element found to ruk jao , ye bhi base case hai na
        return true;
    }
    cout<<endl;
    cout<<"value of mid is : "<<arr[mid];
    cout<<endl;


    if(arr[mid]< key){
        // start = mid+1; Right part me jao
        return binarySearch(arr, mid+1, end , key);
    }else {
        // end = mid-1; left part me jao
        return binarySearch(arr, start, mid-1 , key);
    }

}


int main(){
    int arr[10] = {2,4,6,10,14,16,18,44,55,999};
    int size = 10;
    int key = 999;

    int ans = binarySearch(arr, 0, size-1,key);

    if(ans){
        cout<<"present hai"<<endl;
    }
    else {
        cout<<"not present"<<endl;
    }

}