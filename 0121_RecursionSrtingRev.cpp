#include <iostream>
using namespace std;

void reverse(string &s, int start, int end){
    //base case
    if(start > end){
        return;
    }

    swap(s[start], s[end]);
    start++;
    end--;

    reverse(s,start,end);

}


int main(){
    string s = "asfdg";

    int end = s.length()-1;
    int start = 0;
    reverse(s,start,end);

    cout<<"string is : "<<s<<endl;
}





