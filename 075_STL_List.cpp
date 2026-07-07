#include <iostream>
#include <list>
using namespace std;
int main(){

    list<int> l;

    l.push_back(5);
    l.push_back(5);
    l.push_back(4);
    l.push_back(5);
    l.push_back(5);
    l.push_back(5);
    l.push_back(5);
    l.push_back(9);

    

    cout<< l.size()<<endl;

    cout<< l.front()<<endl;

    int size = l.size();


    //ask yourself that how you did it that time 

    for(int i = 0; i<size ; i++){

        cout<<l.front();

        // l.erase(l.begin());

        l.pop_front();
    }



}