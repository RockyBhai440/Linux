#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int sum=0;
        for(int i=0; i<n; i++){
            if(s[i] == '+')
                sum += 1;
            else    
                sum -= 1;
        }
        cout << abs(sum) << endl;
    }
    return 0;
}