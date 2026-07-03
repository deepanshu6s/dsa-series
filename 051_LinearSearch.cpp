#include <iostream>
using namespace std;

    bool srch(int aray[]){
        int key = 22;
        
        for (int i = 0 ; i<10; i++){
        if (key ==aray[i]){
            
            return 1;
        } 
    }return 0;
}

int main(){

    int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};
   
    srch(arr);
    if(srch(arr)){
        cout<<"yes present"<<endl;
    }
    else{
        cout<<"not present"<<endl;
        }
    }