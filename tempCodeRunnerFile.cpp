#include <iostream>
using namespace std;
int main(){
        int i;
        int n;
        int minIndex = i;

        for(int i = 0; i<n; i++){

                for (int j = i+1; j<n; j++ ){
                     
                if(arr[minIndex] > arr[j]){
                        minIndex = j;
                }

            }
               swap(arr[minIndex], arr[j]) ;
        }
}