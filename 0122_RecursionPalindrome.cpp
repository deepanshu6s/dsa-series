#include <iostream>
using namespace std;
bool palindrome(string &s, int start , int end){
    if (start > end){
        return true;
    }
    bool ans = 1;

    if(s[start] != s[end]){
       
        return false;
    }
    start++;
    end--;

    return palindrome(s, start , end);


}
int main(){
    string s = "aabbccbbaa";
    cout<< palindrome(s, 0, s.length()-1);

}