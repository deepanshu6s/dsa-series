#include <iostream>
using namespace std;

int binarySearch(int arr[] , int size, int key){
    int start = 0;
    int end = size-1;  //index
    int mid = (start + (end-start)/2);  //middle element

    while(start<= end){
        if (arr[mid] == key){
            return mid;
        }
        if (key > arr[mid]){
            //then right wala part chahiye hame 
            //right wale me end to vahi rahega but start change kardenge ham
            //means now start is mid+1
            start = mid+1;
        }else{
            //means go left
            end = mid-1; //is case me start same rahega na 
        }
       mid = (start + (end-start)/2);

    }
return -1; 
}
int main(){
    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3,8,11,14,16};

    int a = binarySearch(even , 6, 18);

    
    cout<< "its present at "<<a+1<<" place";

    int b = binarySearch(odd, 5, 16);
    cout<<"its present at "<<b+1<<" place";

return 0;
}