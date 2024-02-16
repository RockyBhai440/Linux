#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll t;
    cin >> t;
    while(t--){
        ll n, sum = 0, flag = 0;
        cin >> n;
        vector <ll> v;
        ll a[n];
        for(int i=0; i<n; i++){
            ll x;
            cin >> x;
            if(i%2 == 0)
                a[i] = x;
            else        
                a[i]  = -x;
            sum += a[i];
            v.push_back(sum);
            if(sum == 0)
                flag = 1;
        }
        if(flag == 1)
            cout << "YES" << endl;
        else{
            sort(v.begin(), v.end());
            for(int i=0, j=i+1; j<v.size(); i++, j++){
                if(v[i] == v[j]){
                    flag = 1;
                    break;
                }
            }
            if(flag == 1)
                cout << "YES" << endl;
            else    
                cout << "NO" << endl;
        }
    }
    return 0;
}