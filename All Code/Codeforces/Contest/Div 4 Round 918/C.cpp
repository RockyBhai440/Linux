#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        double sum = 0;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
            sum += arr[i];
        }
        int a = sqrt(sum);
        double b = sqrt(sum);
        if(a==b)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
    return 0; 
}