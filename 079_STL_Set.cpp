#include <iostream>
#include <set>

using namespace std;
int main(){

    set<int> s;

    s.insert(2);
    s.insert(2);
    s.insert(2);
    s.insert(2);
    s.insert(2);
    s.insert(222);
    s.insert(222);
    s.insert(222);
    s.insert(222);
    s.insert(222);
    s.insert(222);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(1);


    for(int x : s){
        cout<<x<<" ";
    }
}