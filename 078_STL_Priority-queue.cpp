#include <iostream>
#include <queue>
using namespace std;

int main(){

        priority_queue<int, vector<int>, greater<int>  > p;

        p.push(3);
        p.push(4);
        p.push(999);
        p.push(0);
        p.push(12);
        p.push(6);

        int s = p.size();
        cout<<endl;



        for(int i= 0; i<s; i++){
            cout<<p.top()<<" ";
            p.pop();
        }


    



}