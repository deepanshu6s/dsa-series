#include <iostream>
using namespace std;

int factorial(int n){
    //base case
    if(n == 1)
        return 1; //base case me return likhna mandatory hai 


    int smallerProblem = factorial(n-1);
    int biggerProblem = n * smallerProblem;

    return biggerProblem;
}


int main(){
    int n;
    cin>>n;

    int ans = factorial(n);

    cout<<ans<<endl;
}