#include <iostream>
using namespace std;
int main(){

    int x,y,num;
    
    cout<<"enter row and col : ";
    cin>>x>>y;

    int arr[x][y];

for(int i = 0; i<x; i++){
           for(int j = 0; j<y; j++){
            cout<<"enter "<< i <<" "<<j <<" : ";
               cin>>arr[i][j];
           }
       }

       cout<<"enter num : ";
       cin>>num;


       for(int i = 0; i<x; i++){
           for(int j = 0; j<y; j++){
               if(arr[i][j] == num){
                cout<<"true";
                    break;
               }
           }
       }
       cout<<"false";
       
    }