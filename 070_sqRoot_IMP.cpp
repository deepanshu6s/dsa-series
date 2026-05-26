#include <iostream>
using namespace std;


long long sqrtInteger(int n){
    long long int start = 0;
    long long int end = n;
    long long mid = start +(end - start )/2;
    long long ans = -1;

    while (start <= end){
        long long sq = mid*mid;
        if(sq == n){
            return mid;
        }
        else if(sq < n){
            ans = mid;
            start = mid+1;
        }else {
            end = mid-1;
        }
        mid = start +(end - start )/2;
        
    }
    return ans;
}

double morePrecision(int n, int precision, int tempSol){
    double factor = 1;
    double ans = tempSol;

    for(int i = 0; i<precision;i++){
        factor = factor/10;

        for(double j = ans;j*j<n;j= j+factor){
            ans = j;
        }
    }return ans;
}


int main(){

    int n;
    cout<<"Enter the number : ";
    cin>>n;

    int tempSol = sqrtInteger(n);
   
    
    cout<<"answer is : "<<morePrecision(n,3,tempSol);

   
}
