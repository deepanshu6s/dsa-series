#include <iostream>
using namespace std;

void reachHome(int src , int dest){

    cout<< "src "<<src<<"; dest "<<dest<<endl;

    //base case
    if(src == dest){
        cout<<"pohuch gya"<<endl;
        return;
        
    }

    src++;
    reachHome(src,dest);
 
}


int main(){
    int src = 1;
    int dest = 10;
    cout<<endl;

    reachHome(src, dest);


}