#include <iostream>
#include <map>

using namespace std;
int main(){

    map<int, string > m;

    m[1] = "deep";
    m[2] = "abc";
    m[12] = "xyz";

    m.insert({5, "hii"});

    for(auto i : m){
        cout<<i.first <<" "<<i.second  <<endl;
    }

} 