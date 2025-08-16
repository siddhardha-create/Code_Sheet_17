#include <bits/stdc++.h>
using namespace std;

void pattern(int n){
    int limit = 1;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < limit; j++){
            cout<<"* ";
        }
        limit += 1;
        cout<<endl;
    }
}

int main(){
    int n ;
    cin>>n;
    pattern(n);
}