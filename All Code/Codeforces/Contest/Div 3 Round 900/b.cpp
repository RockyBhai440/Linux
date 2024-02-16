#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n; 
        cin >> n;
        vector <ll> v;
        v.push_back(2);
        v.push_back(3);
        v.push_back(4);
        if(n>3){
            for(int i=3, data=5; i<n; i++, data++){
                int j=i-1, k=i-2;
                for(data; ;data++){
                    if((3*data)%(v[j]+v[k])!=0){
                        v.push_back(data);
                        break;
                    }
                }
            }
            for(int i=0; i<n; i++)
                cout << v[i] << " ";
            cout << endl;
        }
        else{
            for(int i=0; i<n; i++)
                cout << v[i] << " ";
            cout << endl;
        }
    }
    return 0;
}