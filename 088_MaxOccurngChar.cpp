#include <iostream>
using namespace std;

char getMax (string s){

    int arr[26] = {0};

    for(int i = 0; i<s.length(); i++){
        int index = s[i]-'a';
            arr[index]++;
    }

    int maxi = -1;

    for(int j = 0; j<26; j++){
        if(arr[j] > maxi){
            maxi = arr[j];
        }
    }

    int element = -1;

    for(int k = 0; k<26; k++){
        if(maxi == arr[k]){
            int element = k;
            break;
        }
    }

    return element+ 'a';



}

int main(){
    string s;
    cin>>s;


}