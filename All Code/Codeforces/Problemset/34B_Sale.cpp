#include<bits/stdc++.h>
using namespace std;
#define endl '\n'

int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int m, n;
    cin >> n >> m;
    int a[n];
    for(int i=0; i<n; i++)
        cin >> a[i];
    sort(a, a+n);
    int i = 0;
    int sum = 0;
    while(m!=0 && a[i]<0){
        sum += abs(a[i]);
        m--;
        i++;
    }
    cout << sum << endl;
    return 0;
}