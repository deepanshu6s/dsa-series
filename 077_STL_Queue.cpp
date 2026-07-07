#include <iostream>
#include <queue>
using namespace std;

int main(){


    queue<string> q;


    q.push("hello");
    q.push("world");

    // q.pop();

    cout<<q.front();
    
    cout<<q.back();
}