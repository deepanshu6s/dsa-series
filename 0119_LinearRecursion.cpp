#include <iostream>
using namespace std;
bool linear(int *arr, int size, int key){
    if(size == 0){
        return false;
    }


    if(key == arr[0]){
        return true;
    }
    return linear(arr+1, size-1, key);
    
    
}
int main(){
    int arr[5] = {2,4,6,8,9};
    int ans = linear(arr, 5, 8);

    if(ans){
        cout<<"present hai";
    }else {
        cout<<"not present";
    }


}