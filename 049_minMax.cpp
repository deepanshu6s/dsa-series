#include<iostream>
using namespace std;
int main(){

 int arr[100];

    int size;
    cout<<"enter the size of array :";
    cin>>size;

       
    for(int i =0;i<size;i++){
        cout<<"enter value : ";
        cin>>arr[i];

    }
         int a = INT_MIN;

         for(int i =0;i<size;i++){
            if (arr[i]>a){
                a = arr[i];
            }
         }cout<<"max :"<<a<<endl;

            int v = INT_MAX;
         for (int i = 0; i<size;i++){
                if (arr[i]<v){
                     v = arr[i];
                }
         }cout<<"min value is : "<<v;


}