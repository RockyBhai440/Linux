#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n, count=0;
        cin >> n;
        vector<pair<int , int> > v;
        for(int i=0; i<n; i++){
            int x; 
            cin >> x;
            v.push_back(make_pair(x, i));
        }
        // for(int i=0; i<n; i++){
        //     cout << v[i].first << "\t" << v[i].second << endl;
        // }
        sort(v.begin(), v.end());
        // for(int i=0; i<n; i++){
        //     cout << v[i].first << "\t" << v[i].second << endl;
        // }
        for(int i=0, j=i+1; i<n-1; i++, j++){
            if(v[j].second<v[i].second)
                count++;
        }
        cout << count << endl;
    }
    return 0;
}