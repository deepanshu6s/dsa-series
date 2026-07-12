#include <iostream>
using namespace std;
int main(){
    char ch[] = {'a', 'b', 'c', '\0', 'd'};
    string s = "abc\0d";

    cout<<"s : "<< s<<endl;

    cout<<"ch : "<<ch[4]<<" "<<ch[3]<<endl;
}