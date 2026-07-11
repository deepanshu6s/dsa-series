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
int main(){
    string s = "deep";

   char name[20];

   cin>>name;

   int c = length(name);

   cout<<"length is : "<<c<<endl;
}