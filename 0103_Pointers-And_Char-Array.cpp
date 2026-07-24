#include <iostream>
using namespace std;
int main(){
    char arr[6] = "deeps";

    //int arr me to yaha first location ka address print ho jata but is case me deeps print hoga
    //and \0 milte hi ruk jayega 
    // cout<<arr;

    // char a = 'z';


    // char *p = &a;

    // cout<<endl;

    // cout<<p;
    // cout<<endl;

    char ch[6] = "ads\0g";


    char *p = ch;

    cout<<ch<<endl;
    char *c = "abcde";



    cout << c << endl;
}