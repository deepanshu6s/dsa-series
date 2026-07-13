#include <iostream>
#include <vector>
using namespace std;

void rowsum(int arr[][4], int n, int m){
      

    for( int k = 0; k<3; k++){
        int count = 0;
        for(int l = 0; l<4; l++){
            count = count + arr[k][l];
        }
            cout<<count<<" ";
    }

 
}


int main(){
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};


    //printing output

    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }


    cout<<"sum is : ";

    rowsum(arr, 3, 4);



}