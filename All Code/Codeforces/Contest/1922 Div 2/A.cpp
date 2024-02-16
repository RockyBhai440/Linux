#include<bits/stdc++.h>
using namespace std;
#define endl '\n';

int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n, flag = 0;
        cin >> n;
        string a, b, c;
        cin >> a >> b >> c;
        for(int i=0; i<n; i++){
            if(a[i]!=c[i] && b[i]!=c[i]){
                flag = 1;
                break;
            }
        }
        if(flag==1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}