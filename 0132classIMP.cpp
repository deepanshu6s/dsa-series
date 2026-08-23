#include <iostream>
using namespace std;
class Hero{
    private:
      int health =500;

    public:
  
    char level;
    void print (){
        cout<<health<<endl;
    }
};

int main(){
    Hero deep;

    deep.level = 'a';
    deep.print();
}