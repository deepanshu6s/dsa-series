#include <iostream>
using namespace std;

char toLowerCase(char ch){
    if(ch >= 'a' && ch <='z'){
        return ch;
    }else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}



int length (char name[]){

    int i = 0; 
    int  count = 0;

    while(name[i] != '\0'){
        count++;
        i++;
    }
    return count;

}

bool palindrome(char a[], int size){

    int start = 0; 
    int end = size -1;

    while(start < end){

        if(toLowerCase(a[start]) != toLowerCase(a[end])){
            return 0;
        }
        else{
        start++;
        end--;
        }

    }
    return 1;

}

int main(){
    string s = "deep";

   char name[20];

   cin>>name;

   int size = length(name);

   cout<<"length is : "<<size<<endl;

   cout<<"Palindrome or not : "<<palindrome(name, size)<<endl;


}
 