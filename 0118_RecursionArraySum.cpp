#include <iostream>
using namespace  std;
int arraySum(int arr[], int size, int sum){//use int *arr(better)
    if(size == 0){
        cout<<"sum is : "<<sum<<endl;
        return 0;
    }

    sum = sum+arr[0];
    
    arraySum(arr+1, size-1,sum);

    

}
int main(){
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    int sum = 0;

    cout << arraySum(arr, 5, sum);
}


//more better approach 
// #include <iostream>
// using namespace  std;
// int arraySum(int arr[], int size){

//     if(size == 0){
//         return 0;
//     }
//     if(size == 1){
//         return arr[0];
//     }
//    int remaining = arraySum(arr+1, size-1);
//    int sum = arr[0] +remaining;


//    return sum;
    

// }
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int size = 5;

//     cout << arraySum(arr, 5);

// }