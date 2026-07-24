#include <iostream>
using namespace std;
int getSum(int arr[], int size){ //can also write int *arr

    cout<<"size of arr : "<<sizeof(arr)<<endl;
    int sum = 0;
    
    for(int i = 0; i<size; i++){
        sum += arr[i];  //can also write i[arr]
    }

    return sum;



}


int main(){

    int arr[5] = {1,2,3,4,5};

    cout<<sizeof(arr)<<endl;

    cout<<"sum is : "<<getSum(arr, 5)<<endl;

}