#include <iostream>
#include <array>
#include <vector>



using namespace std;

int main(){


    vector <int> deep(5);

    cout<<deep.size()<<endl;
    cout<<deep.capacity()<<endl;

    deep.pop_back();
    deep.push_back(1);

    // deep.clear();

    for(int i = 0; i< deep.size(); i++){
        cout<<deep.at(i)<<endl;
    }
}