#include <iostream>
#include <deque>

using namespace std;
int  main(){

    deque<int> d;

    for(int j = 0 ; j<10; j++){
            d.push_front(j+1);
    }
    

    d.pop_back();
    d.pop_front();
    for(int i = 0; i<d.size(); i++){
        cout<<d.at(i)<<" ";
    }

    
    cout<<endl<<"empty or not : "<<d.empty();



    d.erase(d.begin()+1, d.begin()+2);

    cout<<endl;

    for(int i = 0; i<d.size(); i++){
        cout<<d.at(i)<<" ";
    }cout<<endl;
}

