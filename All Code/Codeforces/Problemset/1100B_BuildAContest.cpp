#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int a[m], b[n]={0};
    for(int i=0; i<n; i++)
        b[i] = 0;
    // for(int i=0; i<n; i++)
    //     cout << b[i] << endl;
    for(int i=0; i<m; i++){
        int sum=0;
        cin >> a[i];
        b[a[i]-1]++;
        for(int j=0; j<n; j++){
            if(b[j]>0)
                sum+=1;
        }
        // for(int k=0; k<n; k++)
        //         cout<<b[k];
        // cout<<endl;
        if(sum==n){
            cout << 1;
            for(int k=0; k<n; k++)
                b[k]--;
        }
        else
            cout << 0;
    }
    cout << endl;
    return 0;
}