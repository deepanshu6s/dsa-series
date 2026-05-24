// #include <iostream>
// using namespace std;

// int pivot(int arr[], int size){

//         int start = 0;
//         int end = size -1;
//         int mid = start+(end-start)/2;

//         while(start <end){
//             if(arr[0] <= arr[mid]){
//                 start = mid+1;
//             }
//             else{
//                 end = mid;
//             }
//             mid = start + (end - start)/2;
//         }return end;
// }


// int search(int arr[], int key, int start , int end){
//     // int start = 0;
//     // int end = size -1;
//     int mid = start + (end - start )/2;
//     while(start <= end){
//        if(arr[mid] == key){
//         return mid;
//        }
//        else if(key > arr[mid]){
//         start = mid+1;
//        }else{
//         end = mid-1;
//        }

//        mid = start + (end - start )/2;
//     }return -1;
// }


// int main(){
//     int array[5] = {7,9,1,2,3};
    
//     int p = pivot(array, 5);

//     int find = 9;
//     int x;
//     if(find >= array[0]){
//         int start = 0;
//         int end = p-1;
//          x = search(array, find,start , end);
//     }else{
//         int start = p;
//         int end = 4;
//          x = search(array, find,start , end);
//     }
//     if(x == -1){
//         cout<<"element not present";
//     }else {
//         cout<<"element present";
// }
// }



#include <iostream>
using namespace std;

int pivot(int arr[], int size){
    int start = 0;
    int end = size -1;
    int mid = start +(end - start)/2;

    while(start<end){
        if(arr[0] <= arr[mid]){
            start = mid +1;
        }else{
            end = mid;
        }
        mid = start +(end - start)/2;
    }return end;
}

int binary(int arr[],int start , int end , int key){

    int mid = start +(end - start)/2;

    while(start<= end){
        if(arr[mid] == key){
            return mid;
        }else if(arr[mid] > key){
            end = mid-1;
        }else {
            start = mid+1;
        }mid = start+ (end - start)/2;
    }return -1;

}

int main(){
    int vv;
    int key;
    cin>>key;


    int arr[6] = {7,9,0,1,2,3};
    int end = 5;

    int a = pivot(arr,6);

    if(arr[a] <= key && key <= arr[end]){
        int start = a;
        end = 5;

        vv = binary(arr,start,end,key);
    }else{
        int start = 0;
        int end = a-1;

        vv = binary(arr,start , end , key);
    }

    if(vv == -1){
        cout<<"Not present";
    }else {
        cout<<"present at index : "<<vv;
    }

    
}