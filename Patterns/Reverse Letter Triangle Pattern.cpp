#include <bits/stdc++.h>
using namespace std;


void pattern(int n){
    int ascii = 65;
    int limit = 5;

    for(int i = 0; i < n ; i++){
        ascii = 65;
        for(int j = 0; j < limit; j++){
            char ch = (char)ascii;  // convert int → char
            cout <<ch;
            cout<<" ";
            ascii += 1;
        }
        cout<<endl;
        limit -= 1;
    }
}


int main(){
    int n = 5;
    pattern(n);
}