#include <iostream>
using namespace std;

void print(int *arr, int size){
    for(int i = 0; i<size; i++){
            cout<<arr[i]<<" ";
    }
}
void merge(int *arr, int start , int end){
    int mid = start+(end-start)/2;
    
    int len1 = mid-start+1;
    int len2 = end - mid;

    int *first = new int[len1];
    int *second = new int[len2];


    //now copy the values in that dynamic memory (or heep memory)

    int mainarrayindex = start;
    for(int i = 0; i<len1; i++){
        first[i] = arr[mainarrayindex];
        mainarrayindex++;
    }

    mainarrayindex = mid+1;
    for(int i = 0; i<len2; i++){
        second[i] = arr[mainarrayindex];
        mainarrayindex++;
    }


    //now merge two sorted arrays file 082 wala easy hai nothing 
    int index1 = 0; 
    int index2 = 0;
    mainarrayindex = start;

    while(index1 <len1 && index2 <len2){

        if(first[index1] < second[index2]){
            arr[mainarrayindex] = first[index1];
            mainarrayindex++;
            index1++;
        }else{
            arr[mainarrayindex] = second[index2];
            index2++;
            mainarrayindex++;
        }

    }

    while(first[index1] < len1){
            arr[mainarrayindex] = first[index1];
            mainarrayindex++;
            index1++;
    }
    while(second[index2] = len2){
        arr[mainarrayindex] = second[index2];
        mainarrayindex++;
        index2++;
    }


    delete []first;
    delete []second;
    print(arr, end+1);
}
void mergeSort(int *arr, int start , int end){
    //base case 
    if(start>end)
    return;



    int mid = start+(end-start)/2;
    //sort left part
    mergeSort(arr, start , mid);


    //sort right part
    mergeSort(arr, mid+1, end);


    //ab dono part sort hogye ab dono ko merge kardo
    merge(arr, start, end);

}



int main(){
    int arr[5] = {2,5,1,6,9};
    int size = 5;

    mergeSort(arr,0, size-1);//arr, start , end bhej diya

}