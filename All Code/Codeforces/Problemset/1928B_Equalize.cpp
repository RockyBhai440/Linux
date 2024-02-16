#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);cout.tie(0);cin.tie(0);
    ll t;
    cin >> t;
    while(t--){
        ll n, max = 1, result = 1;
        cin >> n;
        ll a[n];
        for(ll i=0; i<n; i++)
            cin >> a[i];
        sort(a, a+n);
        vector<ll> v;
        v.push_back(a[0]);
        for(ll i=1; i<n; i++){
            if(a[i]!=a[i-1])
                v.push_back(a[i]);
        }
        ll low = v[0];
        for(ll i=1; i<v.size(); i++){
            if(v[i]-low < n)
                result++;
            else{
                low = v[i];
                result = 1;
            }
            if(result>max)
                max = result;
        }
        cout << max << endl;
    }
    return 0;
}
