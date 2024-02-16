#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        if(a==b)    
            cout << c << endl;
        else if(b==c)
            cout << a << endl;
        else 
            cout << b << endl;
    }
    return 0;
}