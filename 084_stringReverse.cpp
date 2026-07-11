#include <iostream>
using namespace std;

int length (char name[]){

    int i = 0; 
    int  count = 0;

    while(name[i] != '\0'){
        count++;
        i++;
    }
    return count;

}

void reverse(char name[], int size){
    int start = 0; 
    int end = size-1;

    while(start <= end){
        swap(name[start], name[end]);
        start++;
        end--;
    }

    cout<<name<<endl;

}


int main(){
    string s = "deep";

   char name[20];

   cin>>name;

   int size = length(name);

   cout<<"length is : "<<size<<endl;

   reverse(name,size);
}
