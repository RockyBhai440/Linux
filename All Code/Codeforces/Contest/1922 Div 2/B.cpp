#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector <ll> v;
        for(ll i=0; i<n; i++){
            ll x;
            cin >> x;
            ll power = pow(2, x);
            v.push_back(power);
        }
        if(n<3){
            cout << 0 << endl;
            continue;
        }

    }
    return 0;
}