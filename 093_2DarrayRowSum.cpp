#include <iostream>
#include <vector>
using namespace std;




int main(){
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};


    //printing output

    for(int i = 0; i<3; i++){
        for(int j = 0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    vector<int> a;


    for( int k = 0; k<3; k++){
        int count = 0;
        for(int l = 0; l<4; l++){
            count = count + arr[k][l];
        }
            a.push_back(count);
    }

    int size = a.size();

    cout<<"length of each row is : ";

    for(int i = 0; i<size; i++){
        cout<<a[i]<<" ";
    }

}