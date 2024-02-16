#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);cout.tie(0);cin.tie(0);
    ll t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a=1, b=1, c=1;
        char A=0, B=0, C=0;
        n-=3;
        // cout << n << endl;
        while(n!=0){
            if(c<26){
                c++;
                n--;
            }
            else if(b<26){
                b++;
                n--;
            }    
            else if(a<26){
                a++;
                n--;
            }
            // cout << a<<b<<c << endl;
        }
        A = 'a'+a-1;
        B = 'a'+b-1;
        C = 'a'+c-1;
        cout << A << B << C << endl;
    }
    return 0;
}
