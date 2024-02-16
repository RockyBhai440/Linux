#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);cout.tie(0);cin.tie(0);
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll a[n];
        map<int, int> m;
        for(ll i=0; i<n; i++){
            cin >> a[i];
            m[a[i]]++;
        }   
        sort(a, a+n);

        
    }
    return 0;
}
