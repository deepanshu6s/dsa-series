#include <iostream>
using namespace std;
void print(int arr[],int size){
    cout<<endl;
    for(int i = 0; i< size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main(){
    int arr[5] = {2,5,1,6,9};
    int start = 2; 
    int end = 4;
    int mid = start+(end-start)/2;

    int size1 = mid-start+1;
    int size2 = end - mid;

    int arr1[size1] = {0};
    int arr2[size2] = {0};


    int i = 0;
    int j = 0; 
    int k = start;

    while(i<size1){
        arr1[i] = arr[k];
        i++;
        k++;
    }

    while(j<size2){
        arr2[j] = arr[k];
        j++;
        k++;
    }

    print(arr1, size1);
    print(arr2, size2);

    
}