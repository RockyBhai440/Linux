#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k, flag1 = 0, flag2 = 0;
        cin >> n >> k;
        int first = n-k;
        int second = first+1;
        while(true){
            if(first>0){
                cout << first << " ";
                first--;
            }
            else{
                flag1 = 1;
            }
            if(second<=n){
                cout << second << " ";
                second++;
            }
            else{
                flag2 = 1;
            }
            if(flag1 == 1 && flag2 == 1)
                break;
        }
        cout << endl;
    }
    return 0;
}
