#include <iostream>
#include <array>
using namespace std;
int main(){
    array<int,5> a = {1,2,3,4,6};

    int b = a.size();

    for(int i = 0; i<b; i++){
        cout<<a[i]<<" ";
    }
}