#include <iostream>
#include <math.h>
using namespace std;
int main()
{
long long int n;
cin>>n;
int ans = 0; 
int i = 0;


if(n <= -2147483648 || n>= 2147483647){
    cout<<"reverse = "<<0 <<endl;
}else{

while(n != 0 ){
int digit = n%10;

ans = (ans * 10)+ digit;
n = n/10;
i++;

}
cout<<ans;



}

}