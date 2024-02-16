#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        string a, b, c;
        int sum=0;
        cin >> a >> b >> c;
        for(int i=0; i<3; i++){
            sum += (int)(a[i] + b[i] + c[i]);
        }
        char result = (3*('A'+'B'+'C')) - (sum - 63);
        cout << result << endl;
    }
    return 0;
}