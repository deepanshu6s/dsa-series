#include <iostream>
using namespace std;
int main(){

        int num = 123;
        cout<<"address of num is "<< &num<<endl;


        int *a = &num;
        //means a is a pointer of int datatype
        cout<<"pointer stored address is : "<<a<<endl;



        //both are same  

        cout<<"value of num is : "<< *a<< endl;
        cout<<"address of num is : "<< a<<endl;



        cout<<"size of num is : "<<sizeof(*a)<< endl;
        cout<<"size of pointer is : "<<sizeof(a)<<endl;
}