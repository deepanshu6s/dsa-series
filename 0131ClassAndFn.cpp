#include <iostream>
using namespace std;
class Hero{
    public:
    int health;
    char level;
    void print (){
        cout<<health<<endl;
    }
};
int main(){
    Hero deep;
    deep.health = 100;

    deep.print();
}