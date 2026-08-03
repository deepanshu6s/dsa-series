#include <iostream>
using namespace std;
int partition(int arr[], int start , int end){
//sabse pehle pivot nikalenge 
    int pivot = arr[start];

    int count = 0; //kitne elements pivot se chote hai 

    for(int i = start+1; i<=end; i++){
        if(arr[i] <= pivot){
            count++;
        }
    }
    //place pivot at the right position
    int pivotIndex = start + count;
    swap(arr[start], arr[pivotIndex]);

    //ab left and right part sambhalenge left me sab pivot se chote honge and vice versa
    //left or right pe i and j daal ke , see in notes

    int i = start; 
    int j = end;

    while(i<pivotIndex &&  j> pivotIndex){

        while(arr[i] < pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }

        if(i<pivotIndex &&  j> pivotIndex){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int start , int end){
    //base case
    if(start >= end){
        return;
    }
    //partition krenge and p nikalenge
    int p = partition(arr, start, end);
    
    //left and right part sort krenge 
    quickSort(arr, start, p-1 );
    quickSort(arr, p+1, end);
}
int main(){
    int arr[5] = {2,4,1,6,9};
    int size = 5;

    quickSort(arr, 0, size-1);

    //to print array 
    cout<<"answer : ";
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    
    return 0; 

}