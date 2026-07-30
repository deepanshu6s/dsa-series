#include <iostream>
using namespace std;
bool isSorted(int arr[], int size){
    //base case
    if(size == 0 || size == 1)
        return true;

    
    if(arr[0] > arr[1]){
        return false;
    }
    else {
        bool remaining = isSorted(arr+1, size-1);
        return remaining;
    }//else lagane ki jagha direct 
    //return isSorted(arr+1, size-1); 
    //ye bhi likh sakte hai you already know


}

int main(){
    int arr[5] = {2,4,6,88,88};
    int size = 5;

    bool ans = isSorted(arr, 5);


    if(ans)
        cout<<"sorted hai";

    else 
    cout<<"not sorted";
    

}