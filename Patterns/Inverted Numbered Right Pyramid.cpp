#include <bits/stdc++.h>
using namespace std;

void pattern(int n){
    int limit = n;

    for(int i = n; i > 0; i--){
        for(int j = 1; j <= limit; j++){
            cout<<j;
            cout<<" ";
        }
        limit -= 1;
        cout<<endl;
    }
}

int main(){
    int n ;
    cin>>n;
    pattern(n);
}