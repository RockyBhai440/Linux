#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n, k, x, flag=0, Sum=0;
        cin >> n >> k >> x;
        ll sum = (n*(n+1))/2;
        if(x>sum)
            cout << "NO\n";
        else{
            for(int i=1; i<=n; i++){
                Sum += i;
                if(Sum>=x){
                    flag = i;
                    break;
                }        
                  
            }
            //  cout << flag << endl; 
            if(k>flag)
                cout << "NO\n";
            else 
                cout << "YES\n";
        }    
    }
    return 0;
}