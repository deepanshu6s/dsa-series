#include <iostream>
using namespace std;

int main(){

    int arr[5] = {1,2,4,5,6};

    int start = 0;
    int end = 4;
    int ans = INT_MIN;

    while(start <= end){
        int a = max(arr[start], arr[end]);
        if(a>ans){
            ans = a;
        }
        start++;
        end--;
    }
    cout<<ans;
    

}
