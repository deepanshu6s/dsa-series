#include <iostream>
using namespace std;

int factorial(int n){
    //base case
    if(n == 0)
        return 1; //base case me return likhna mandatory hai 


    int smallerProblem = factorial(n-1);
    int biggerProblem = n * smallerProblem;

    return biggerProblem;
    //check notebook after understanding code that how we make this function body very small 
}


int main(){
    int n;
    cin>>n;

    int ans = factorial(n);

    cout<<ans<<endl;
}