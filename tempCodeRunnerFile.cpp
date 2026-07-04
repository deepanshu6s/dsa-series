#include <iostream>
using namespace std;

int binary (int arr[], int size ,int key){
        int start = 0; 
        int end = size -1; 
        int mid = start + (end-start)/2;


        while(start<=end){
                if(arr[mid] == key){
                        return mid;
                }
                else if(key > arr[mid]){
                        start = mid+1;
                }else{
                        end = mid-1;
                }
                mid = start + (end-start)/2;

        }
        return -1;


}
int main(){

        int arr[7] = { 1,2,3,4,5,6,7};
        
        int key = 7;
        
        int ans = binary(arr, 7 , key);
                cout<<endl;

        if(ans == -1){
                
                cout<<"element not found"<<endl;
        }
        else{
        cout<<"index of "<<key<<" is : "<<ans<<endl;
        }
}