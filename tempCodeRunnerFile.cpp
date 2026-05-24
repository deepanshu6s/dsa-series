#include <iostream>
using namespace std;

int squareRoot(int n){
    int start = 0;
    int end = n;
    int mid = start + (end - start )/2;
    int ans = -1;

    while (start < end){
        int sq = mid*mid;
        if(sq == n){
            return mid;
        }else if(sq < n){
            ans = mid;
            start = mid+1;
        }else {
            end = mid-1;
        }mid = start + (end - start )/2;
        
    }return ans;
}

double setPrecision(int n, int precision , int tempSol){
    double factor = 1;
    double ans = tempSol;

    for(int i =0;i<precision;i++){

        factor = factor/10;

        for(double j = ans; j*j<n ; j= j+factor){
            ans = j;
        }
    }return ans;
}

int main(){

    int n;
    cout<<"Enter the value of n : ";
    cin>>n;

    int tempSol = squareRoot(n);
    cout<<"Temp solution is : "<<tempSol<<endl;

    double a = setPrecision(n,3,tempSol);

    cout<<"Main solution is : " <<a;
   
}