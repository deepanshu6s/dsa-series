#include <iostream>
#include <array>
#include <vector>



using namespace std;

int main(){


    vector <int> deep(5);

    cout<<deep.size()<<endl;
    cout<<deep.capacity()<<endl;

    deep.pop_back();
    deep.push_back(999);

    // deep.clear();

    for(int i = 0; i< deep.size(); i++){
        cout<<deep.at(i)<<endl;
    }


    vector<int> c(deep);


    cout<<"we putted deep inside a new array named c and print it down"<<endl;

    for(int i = 0; i<c.size(); i++){
        cout << c.at(i)<<endl;
    }
}