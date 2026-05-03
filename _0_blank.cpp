#include <iostream>
using namespace std;
int main(){
    char a; 
    cout<<"enter the value to check"<<endl;
    cin>>a;

    if (a >= 'A' && a<= 'Z'){
        cout<<"upper case";

    }
    else if (a >= 'a' && a<= 'z'){
        cout << "lower case";

    }else if (a >= '0' && a<='9'){
        cout<<"numeric";
    }
    else {
        cout<< "any other type number";
    }
}