#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    // ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector <int> v;
        for(int i=0; i<n; i++){
            if(s[i]=='a' or s[i]=='e')
                v.push_back(i);
        }
        int q = v.size();
        int r[q-1];
        for(int i=0, j=i+1; j<v.size(); i++, j++){
            if(v[j]-v[i] == 2)
                r[i] = (v[i]+1);
            else    
                r[i] = (v[i]+2);
        }
        for(int i=0, j=0; i<n; i++){
            if(i == r[j] && r[j] > 0){
                cout << '.' << s[i];
                j++;
            }
            else    
                cout << s[i];
        }
        cout << endl;
    }
    return 0;
}