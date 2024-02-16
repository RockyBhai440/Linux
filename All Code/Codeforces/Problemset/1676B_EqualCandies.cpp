#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n, sum = 0;
        cin>>n;
        vector <ll> v(n);
        for(int i=0; i<n; i++)
            cin>>v[i];
        ll m = *min_element(v.begin(), v.end());
        for(int i=0; i<n; i++){
            v[i] = v[i]-m;
            sum += v[i];
        }
        cout<<sum<<endl;
    }
}