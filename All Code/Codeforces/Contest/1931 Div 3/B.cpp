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
        ll sum = 0;
        for(ll i=0; i<n; i++){
            cin >> a[i];
            sum += a[i];
        }   
        ll least = sum/n;
        if(n==1){
            cout << "YES" << endl;
            continue;
        }
        ll extra = 0;
        ll flag = 0;
        for(ll i=0; i<n; i++){
            if(a[i]>=least)
                extra += a[i]-least;
            else if(extra>0 && a[i]<least){
                ll need = least - a[i];
                if(extra>=need)
                    extra -= need;
                else{
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 1 || extra>0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
      
    }
    return 0;
}
