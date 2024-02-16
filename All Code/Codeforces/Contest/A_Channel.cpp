#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n, a, q;
        cin >> n >> a >> q;
        string s;
        cin >> s;
        ll pc=0, mc=0;
        ll p = a, flag=0;
        for(int i=0; i<q; i++){
                if(s[i]=='+'){
                    p++;
                    pc++;
                }
                else{
                    p--;
                    mc++;
                }
                if(p>=n){
                    flag=1;
                    break;
                }
            }
        if(n==a || flag==1)
            cout << "YES\n";
        else{
            if(p>=n)
                cout << "YES\n";
            else if((a+pc)>=n)
                cout << "MAYBE\n";
            else 
                cout << "NO\n";
        }
    }
    return 0;
}