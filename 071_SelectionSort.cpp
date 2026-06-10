#include <iostream>
using namespace std;

void sorte(int arr[] , int size){
    int n = size;

    for(int i = 0 ; i<n-1;i++){
        int minIndex = i;
        for(int j = i+1; j<n;j++){
            if(arr[minIndex] >arr[j] ){
                
                minIndex =j ;
            }
            
        }
        swap(arr[minIndex], arr[i]);

    }

}


int main(){


    int arr[6] = {1,7,9,2,3,0};
    sorte (arr, 6);

    for(int i = 0; i<6;i++){
        cout<<arr[i]<<endl;
    }

}