#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

    ll t;
    cin >> t;
    while(t--){
        ll a, b;
        cin >> a >> b;
        if(b%2 == 0 && b/2 != a){
            cout << "YES" << endl;
        }
        else if(a%2 == 0 && a/2 != b){
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}