#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin >> n;
    vector <ll> v;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int flag=0;
    for(int i=0, j=1; i<n-1; i++, j++){
        if(v[i]!=v[j] && v[j]<(2*v[i])){
            flag=1;
            break;
        }
    }
    if(flag==0)
        cout << "NO\n";
    else    
        cout << "YES\n";
    return 0;
}

// 1-2bits
// 00 - 0
// 01 - 1
// 10 - 2
// 11 - 3

// 4   16
// 2^2 2^4
// 3       6
// 7       63

// 1 2 4 8 16 32 64

// 1       2       3       4       5       6       7

// 1       3       7       15      31      63      127