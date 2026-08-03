#include <iostream>
using namespace std;

void print(int *arr, int size){
    for(int i = 0; i<size ; i++){
        cout<<arr[i] <<" ";
    }
}
void merge(int *arr, int start , int end){
    int mid = start + (end - start)/2;

    int len1 = mid-start+1;
    int len2 = end- mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //copying values
    int mainArrayIndex = start;
    for(int i = 0; i<len1; i++){
        first[i] = arr[mainArrayIndex];
        mainArrayIndex++;
    }

    mainArrayIndex = mid+1;
    for(int i = 0; i<len2; i++){
        second[i] = arr[mainArrayIndex];
        mainArrayIndex++;
    }

    //now merge them 
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = start;

    while(index1<len1 && index2<len2){
        if(first[index1] < second[index2]){
            arr[mainArrayIndex] = first[index1];
            mainArrayIndex++;
            index1++;
        }else{
            arr[mainArrayIndex] = second[index2];
            mainArrayIndex++;
            index2++;
        }
    }

    while(index1 < len1){
        arr[mainArrayIndex] = first[index1];
        mainArrayIndex++;
        index1++;
    }

    while(index2 < len2){
        arr[mainArrayIndex] = second[index2];
        mainArrayIndex++;
        index2++;
    }
    delete [] first;
    delete [] second;

}

void mergeSort(int *arr, int start , int end){
    //
    if(start >= end){
        return;
    }


    int mid = start + (end - start)/2;
  
    //left part
    mergeSort(arr, start, mid);

    //right part
    mergeSort(arr, mid+1, end);


    merge(arr, start, end);
}

int main(){
    int arr[5] = {2,5,1,6,9};
    int size = 5;
    mergeSort(arr, 0, size-1);
    print(arr, size);
}