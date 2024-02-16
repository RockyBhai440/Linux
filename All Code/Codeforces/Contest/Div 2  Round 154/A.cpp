#include<bits/stdc++.h>
using namespace std;
#define ll long long
int isprime(int n){
    int flag=0;
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0)
        return 0;
    else    
        return 1;
}
int main(){
    ll t;
    cin >> t;
    while(t--){
        ll s;
        cin >> s;
        for()
    }
    return 0;
}