#include <iostream>
using namespace std;

void update(int *p){
    p++;

}



int main(){

    int a = 5;
    int *p = &a;

    cout<<p<<endl;


    // p++;
    // cout<<p<<endl;

    update(p);
    cout<<p<<endl;


}