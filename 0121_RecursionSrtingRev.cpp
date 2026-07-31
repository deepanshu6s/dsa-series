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





// #include <iostream>
// using namespace std;
// int main(){
    // int n;
    // cin>>n;
    // 
    // if(n%2 != 0 || n >100 || n<1){
        // cout<<"NO";
    // }
    // else{
// 
    // int both = n/2;
    // if(both >0 && both%2 == 0){
        // cout<<"YES";
    // }else{
        // cout<<"NO";
    // }
// }
// }
// 