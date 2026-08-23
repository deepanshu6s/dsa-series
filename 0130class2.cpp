#include <iostream>
// #include "0130class.cpp"
using namespace std;class Hero{
    public: 
    int mobileno;
    char level;
    char name[100];
};

int main(){
    Hero h2;

    h2.mobileno = 958858;
    h2.level = 'a';

    cout<<h2.mobileno<<" "<<h2.level<<endl;

}

//just simple 